var flash = require("connect-flash"); // this is from app.js
app.use(flash()); // this is from app.js too

// this is from index.js
var express = require("express");
var router = express.Router();

router.get("/", function (req, res, next) {
  res.render("flash"); //remember we are using flash.ejs here and not index.ejs
});

router.get("/failed", function (req, res, next) {
  req.flash("age", 12); //flash takes a name and data inside
  req.flash("name", "john"); //flash takes a name and data inside
  res.send("flash failed");
});

router.get("/check", function (req, res, next) {
  console.log(req.flash("age"));
  console.log(req.flash("name")); //you need to console.log them separately
  res.send("flash checked");
});

module.exports = router;
