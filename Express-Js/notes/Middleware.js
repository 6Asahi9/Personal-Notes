const express = require('express')
const app = express()

// now between the server and the router , there is a thing called "middleware"
// Middleware in Express.js is a function that is executed before the final request
// handler is called. It can be used to perform various tasks, such as logging,
// authentication, or modifying the request or response objects.

app.use(function(req, res, next){
    console.log("hello middleware")
    console.log(`${req.method} request to ${req.url}`)
    next() //without the next() the request will be stuck in the middleware and won't go to
    // its final destination or to next middleware
})

app.get("/profile",function(req,res){
    res.send("Welcome to My Profile!")
})

app.listen(3000)