const express = require('express')
const app = express();

app.set("view engine", "ejs"); //engine will look at a ejs type file

app.set('views', './views');

app.use(express.static('./public')) //folder name
app.get('/', function(req, res){
    res.render('test',); //front name of the file 
})

app.listen(3000, () => {
    console.log('Server is running on port 3000');
  });