var createError = require("http-errors");
var express = require("express");
var path = require("path");
// ----------------------------------------------------------------
var cookieParser = require("cookie-parser"); // this is for cookies file
// ----------------------------------------------------------------
var logger = require("morgan");
// ----------------------------------------------------------------
var expressSession = require("express-session"); // this is for the session file
// ----------------------------------------------------------------
var flash = require("connect-flash"); // this is for the flash file
// ----------------------------------------------------------------

var indexRouter = require("./routes/index");
var { User, serializeUser, deserializeUser } = require("./routes/users");
const passport = require("passport"); //* from (Authentication and Authentication)

var app = express();

// view engine setup
app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs"); //* after view engine from (Authentication and Authentication)

// Express Session setup
app.use(
  expressSession({
    resave: false,
    saveUninitialized: false, // don't save unnamed values or files
    secret: "hello", // this should be a secret key for your application
  })
);

// Passport.js setup
app.use(passport.initialize());
app.use(passport.session());
passport.serializeUser(User.serializeUser());
passport.deserializeUser(User.deserializeUser());

// Flash message middleware
app.use(flash());

app.use(logger("dev")); //* and before logger from (Authentication and Authentication)
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
// ----------------------------------------------------------------
app.use(cookieParser()); // this is for cookie file
// ----------------------------------------------------------------
app.use(express.static(path.join(__dirname, "public")));

app.use("/", indexRouter);
// app.use("/users", indexRouter); // Ensure this is set correctly

// catch 404 and forward to error handler
app.use(function (req, res, next) {
  next(createError(404));
});

// error handler
app.use(function (err, req, res, next) {
  // set locals, only providing error in development
  res.locals.message = err.message;
  res.locals.error = req.app.get("env") === "development" ? err : {};

  // render the error page
  res.status(err.status || 500);
  res.render("error");
});

module.exports = app;
