// routes/index.js
var express = require("express");
var router = express.Router();

router.get("/", function (req, res, next) {
  var errorMessage = req.query.error;

  // Render the login page with the error message
  res.render("test", { errorMessage });
});

// Error handling middleware
router.use(function errorHandler(err, req, res, next) {
  // Log the error
  console.error(err.stack);

  // Access the wrong credentials
  var wrongCredentials = err.wrongCredentials;

  if (wrongCredentials) {
    // Handle the wrong credentials
    console.error("Wrong credentials:", wrongCredentials);

    // Redirect to the main route with the error message
    res.redirect("/?error=Wrong email or password");
  } else {
    // No error, continue to the next route
    next();
  }
});

module.exports = router;
