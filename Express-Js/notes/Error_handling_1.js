const express = require('express')
const app = express();

app.set("view engine", "ejs");

app.set('views', './views');

// serve static files from the public folder. This is where your css, js, images and other files are kept.
app.use(express.static('./public')) 

app.get('/', function (req, res) {
    res.render('index'); 
})

app.get('/about', function (req, res) {
    res.render('about_Us', {name: "josh"});  
})  
//error handling
app.get('/error', (res,req,next)=>{
    throw new Error("this if from throw new error");
    //this expects an 'error.ejs' file in the 'views' folder.
    // ive made a change on line 88 in error.ejs
})

app.use(function errorHandler(err,req,res,next){
  if(res.headerSent){
    /* it checks if the response headers have already
    been sent using res.headerSent. If they have, it
    means that an error has already been handled, so it calls next(err) */
    return next(err)
  }  
  res.status(500) //(Internal Server Error) 
  res.render('error', //now this expects a error.ejs file in views and renders it
    {error: err}) //it will throw the value of custom error you wrote on line 14 
});


app.listen(3000); 