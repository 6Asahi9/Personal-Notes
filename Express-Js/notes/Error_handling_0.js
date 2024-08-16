const express = require('express');
const app = express();

app.set("view engine", "ejs");

app.set('views', './views');

app.use(express.static('./Public')) 

app.get('/', function (req, res) {
    res.send('this is the main page');
});

app.get('/profile', function (req, res) {
    res.send('This page is for profile!');
});

// Add this middleware function after all your routes
app.use((req, res, next) => {
  const error = new Error('Page Not Found');
  error.status = 404;
  next(error);
});

// Your existing error handling middleware function
app.use((err, req, res, next) => {
  res.status(err.status || 500);
  res.render('error', {
    error: err //this will show whatever is written in the Error() on line 20
  });
});

app.listen(3000); 