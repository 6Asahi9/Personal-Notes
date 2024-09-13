var express = require("express");
var router = express.Router();
const { User } = require("./users");
const passport = require("passport");
const localStrategy = require("passport-local");

// Passport setup
passport.use(new localStrategy(User.authenticate()));
passport.serializeUser(User.serializeUser());
passport.deserializeUser(User.deserializeUser());

// Root route
router.get("/", function (req, res, next) {
  res.render("index", { title: "My Application" });
});

// Profile route (protected)
router.get("/profile", isLoggedIn, function (req, res, next) {
  res.send("Welcome to profile");
});

// Registration route
router.post("/register", function (req, res, next) {
  var userData = new User({
    username: req.body.username,
    secret: req.body.secret,
  });

  User.register(userData, req.body.password)
    .then(function () {
      // Use passport.authenticate directly after registration
      passport.authenticate("local")(req, res, function () {
        res.redirect("/profile");
      });
    })
    .catch(function (err) {
      console.error("Registration error:", err);
      next(err);
    });
});

// Login route
router.post(
  "/login",
  passport.authenticate("local", {
    successRedirect: "/profile",
    failureRedirect: "/",
    failureFlash: true, // Optional: shows failure messages if configured
  })
);

// Logout route
router.get("/logout", function (req, res, next) {
  req.logout(function (err) {
    if (err) return next(err);
    res.redirect("/");
  });
});

// Middleware to check if user is authenticated
function isLoggedIn(req, res, next) {
  if (req.isAuthenticated()) {
    return next();
  }
  console.log("User not authenticated, redirecting to login.");
  res.redirect("/");
}

module.exports = router;
