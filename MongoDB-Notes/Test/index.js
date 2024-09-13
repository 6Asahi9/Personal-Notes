var express = require("express");
var router = express.Router();
const { User, serializeUser, deserializeUser } = require("./users");
const passport = require("passport");
const localStrategy = require("passport-local");

// Passport setup
passport.use(new localStrategy(User.authenticate()));
passport.serializeUser(serializeUser);
passport.deserializeUser(deserializeUser);

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
  console.log("Register route hit");

  var userData = new User({
    username: req.body.username,
    secret: req.body.secret,
  });

  console.log("User data created:", userData);

  User.register(userData, req.body.password)
    .then(function (registration) {
      console.log("User registered:", registration);

      passport.authenticate("local", function (err, user, info) {
        if (err) {
          console.error("Authentication error:", err);
          return next(err);
        }
        if (!user) {
          console.error("Authentication failed, user not found:", info);
          return res.redirect("/");
        }
        req.logIn(user, function (err) {
          if (err) {
            console.error("Login error:", err);
            return next(err);
          }
          console.log("User authenticated, redirecting to /profile");
          return res.redirect("/profile");
        });
      })(req, res, next);
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
  }),
  function (req, res) {}
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
  res.redirect("/");
}

module.exports = router;
