// lets say we have 
// www.facebook.com/profile/Joshua
// www.facebook.com/profile/Sarah
// now we wont make another special route for this when only one thing is changing , thats why we will 
// use dynamic routing

const express = require('express')
const app = express();

app.get('/', function (req, res) {
    res.send('Hello World!') 
})
app.get('/profile', function (req, res) {
    res.send('this page is for profile!') 
})

// !make sure to add : before username to make it dynamic 
app.get('/profile/:username', (req, res) => {
    res.send(`welcome back ${req.params.username}!`); // use backtick instead of " "
})
/*req.params is an object containing route parameters. 
 it's used to access the dynamic :username segment in the 
*/ 

app.listen(3000); 