var express = require("express");
var router = express.Router();
const User = require("./users");

// Root route
router.get("/", function (req, res, next) {
  res.render("index", { title: "My Application" });
});

// Create a new user
router.get("/create", async function (req, res, next) {});

router.get("/users", async function (req, res, next) {
  try {
    // lets say we have an array called "categories" which is an array for every employees
    // now we wanna find someone whose category includes fashion in it
    let users = await User.find({ categories: { $all: ["fashion"] } });
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
