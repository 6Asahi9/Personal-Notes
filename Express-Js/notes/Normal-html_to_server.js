const express = require('express');
const app = express();

// * test.js and test.css are connected to the index.html from testing

// Set the views directory to './testing'
app.set('views', './testing');

// Serve static files from the current directory
app.use(express.static(__dirname +'/Public')); //! DO NOT USE ./Public but use /Public

// Define a route for the root path ('/')
app.get('/', function(req, res) {
/*The __dirname variable in Node.js represents the directory name of the current module.
  It is a built-in global variable that holds the path to the current module's directory.
  By using __dirname, you ensure that the paths to your static files are relative to the
  current module's directory. This makes your code more portable and easier to maintain, 
  as the paths will work correctly regardless of where the module is located in the file system.
*/ 
  res.sendFile(__dirname + '/testing/index.html');
});

// Start the server on port 3000
app.listen(3000, () => {
  console.log('Server is running on port 3000');
});