const express = require('express')
const app = express();

app.set("view engine", "ejs");
// now make a "views" folder and a file in it

// Set the views directory to './views' , this is the folder name, you can also change it too
app.set('views', './views');

app.get('/', function (req, res) {
    // make sure to use render here and the file exits in the views folder
    res.render('index'); //don't mention .ejs in it  
})

app.get('/about', function (req, res) {
    // in the file where you want to send the name or change the name value as 
    // write <%name%> in the ejs file and after that the name shown below will show up 
    res.render('about_Us', {name: "josh"});  
})  

app.listen(3000); 