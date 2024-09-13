// from app.js
var session = require("express-session"); //this is for the session file
// ----------------------------------------------------------------
//this is for session file too
app.use(
  session({
    resave: false, // don't save if the session value is the same already as previous one
    saveUninitialized: false, //don't save unnamed values or files
    secret: "your-secret-key", //this should be a secret key for your application.
    // this key will be used to encrypt the data
  })
);
// ----------------------------------------------------------------

// from index.js
var express = require("express");
var router = express.Router();

router.get("/", function (req, res, next) {
  // req.session is an object that represents the client's session.
  // It is stored on the server-side and associated with the client's session.

  // Set a property on the session object.
  // In this case, we are setting req.session.Anything = "user visited here".
  // This property can be used to store any data related to the client's session.
  req.session.Anything = "user visited here";

  // Set another property on the session object.
  // In this case, we are setting req.session.banned = true.
  // This property can be used to track whether the client is banned or not.
  // Note: The value of req.session.banned is not enforced on the client-side.
  // It is only used on the server-side to determine whether the client is banned.
  req.session.banned = true;

  res.render("index", { title: "MongoDB" });
});

// and you can also check the session in other routes too
router.get("/session-info", function (req, res, next) {
  console.log("Session info:", req.session);
  res.send("Session info: " + JSON.stringify(req.session));
});

// you can use this info to set routes like
router.get("/Banned-info", function (req, res) {
  if (req.session.banned === true) {
    res.send("You are banned");
  } else {
    res.send("You are not currently banned");
  }
});

// Create a route to remove the ban
router.get("/remove-ban", function (req, res, next) {
  try {
    // Check if the client is currently banned
    if (req.session.banned === true) {
      // Remove the ban by setting req.session.banned to false
      req.session.banned = false;
      res.send("Ban removed");
    } else {
      res.send("You are not currently banned");
    }
  } catch (error) {
    // Handle any errors that occur during the process
    console.error("Error removing ban:", error);
    res.status(500).send("An error occurred while removing the ban.");
  }
});

// or you can use .destroy too
router.get("/destroy-ban", function (req, res) {
  req.session.destroy(function (err) {
    if (err) throw err;
    res.send("Ban destroyed");
  });
});

module.exports = router;
