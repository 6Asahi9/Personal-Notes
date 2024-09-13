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
    // now if i wanna find someone with category exists or does not exists
    let users = await User.find({ categories: { $exists: false } }); //toggle between true and false
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
