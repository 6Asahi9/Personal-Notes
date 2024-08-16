const express = require('express');
const app = express();

// !Basic

// Define a GET route for the root URL ("/")
app.get('/', (req, res) => {
  res.send('Hello, World!');
});

// Define a POST route for the "/submit" URL
app.post('/submit', (req, res) => {
  // Handle the POST request
  res.send('Data submitted successfully!');
});

//* if you wanna update the server without restarting it use 'npx nodemon .\index.js'

// Start the server
app.listen(3000, () => {
  console.log('Server is running on port 3000'); 
  //*write 'localhost:3000' in the browser to check
  //* or use test.rest file and use 'GET http://localhost:3000/'
});

// ----------------------------------------------------------------

// ! Middleware

app.use(function(req, res, next){
    console.log("hello middleware")
    console.log(`${req.method} request to ${req.url}`)
    next() //without the next() the request will be stuck in the middleware and won't go to
    // its final destination or to next middleware
})

app.get("/profile",function(req,res){
    res.send("Welcome to My Profile!")
})

// ----------------------------------------------------------------

// ! Connect ejs file to server
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

// ----------------------------------------------------------------

// ! connect css file to ejs
pp.use(express.static('./Public')) //folder name where css and js files are
//* remember ./Public works when file is ejs and /Public works when file is a normal html
app.get('/', function(req, res){
    res.render('test',);
})

// ----------------------------------------------------------------

// ! connect html file to sever
app.set('views', './testing');
app.use(express.static(__dirname +'/Public')); //! DO NOT USE ./Public but use /Public
app.get('/', function(req, res) {
  res.sendFile(__dirname + '/testing/index.html');
});

// ----------------------------------------------------------------

// ! Error handling
// Add this middleware function after all your routes
app.use((req, res, next) => {
  const error = new Error('Not Found');
  error.status = 404;
  next(error);
});

// Your existing error handling middleware function
app.use((err, req, res, next) => {
  res.status(err.status || 500);
  res.render('error', {
    error: "page does not exits"
  });
});

// ----------------------------------------------------------------