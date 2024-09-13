var express = require("express");
var router = express.Router();

// ----------------------------------------------------------------
// this is from app.js
app.use(cookieParser()); //this is for cookie file
// ----------------------------------------------------------------

// make the cookies
router.get("/", function (req, res, next) {
  res.cookie("age", 34); //we are sending a cookie to the front end
  // cookie always needs a name and a value in it

  res.render("index", { title: "MongoDB" });
});

// now to read the cookie
router.get("/read-cookie", function (req, res, next) {
  console.log(req.cookies.age);
  // we used req cos we are trying to read date from client on to the server
  // and client's data comes in req to the server
  res.send("check");
});

// to delete a cookie
router.get("/delete-cookie", function (req, res, next) {
  res.clearCookie("age"); // this will delete the cookie
  res.send("cookie deleted");
});

// update the cookie
router.get("/update-cookie", function (req, res, next) {
  res.cookie("age", 35); // updating the cookie value
  res.send("cookie updated");
});

module.exports = router;
