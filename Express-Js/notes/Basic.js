const express = require('express')
const app = express()

// ! remember in package.json the main entry point is "index.js" so if you named the file something
// ! else , it will throw an error  

// to build it i need two things route and function with request and return value
// app.get('/route', function(req, res) { } )

// the '/' is the router 
app.get('/', function (req, res) {
    // it takes a request and returns
    res.send('Hello World!') //this is the response 
})

app.listen(3000) //this is server code

// to start , go to terminal and write "node .\index.js"
// to close the server tap on blank space in terminal and write "ctrl + c"
// to check the server , go to browser and write "localhost:3000"
//! and when you make any changes, the sever will render only when you closer and re-start the server

// now closing and re-starting can be annoying so for that we'll install another package 
// called "nodemon" by using "npm i nodemon"
//* now we will start the file with nodemon instead of using npm, "npx nodemon .\index.js"

// lets add another app.get but this time with a router caller "profile"
app.get("/profile",function(req,res){
    res.send("Welcome to My Profile!")
})

// ! make sure the app.listen is always at the bottom to ensure that server starts listening for
// ! requests after all the routes have been defined
app.listen(3000, () => {
    console.log('Server is running on port 3000')
})
//this time go to "localhost(3000)/profile" on browser 