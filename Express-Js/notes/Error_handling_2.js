const express = require('express');
const app = express();

app.get('/', function (req, res) {
    res.send('Hello World!');
});

app.get('/profile', function (req, res) {
    res.send('This page is for profile!');
});

// Error-handling middleware function
app.use(function (req, res, next) {
    const error = new Error('Page Not Found');
    error.status = 404;
    next(error);
});

// pass the error to the next middleware function

// Error-handling middleware function to send a custom error message
app.use(function (err, req, res, next) {
    res.status(err.status || 500);
    res.send({
        error: {
            message: err.message,
            status: err.status
        }
    });
});

// or if we wanna redirect them to the previous page
app.use(function (err, req, res, next) {
    res.status(err.status || 500);
    res.redirect('/previous-page');
});

app.listen(3000);