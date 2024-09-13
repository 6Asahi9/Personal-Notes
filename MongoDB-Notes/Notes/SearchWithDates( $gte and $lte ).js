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
    // lets say we wanna find something on a specific date range
    var date1 = new Date("2024-8-25"); // year - month - date
    var date2 = new Date("2024-8-27");
    // gte means greater than equal to date1 and
    // lte means less than or equal to date2
    // we are fetching all users created after this date range 2024-08-25 to 2024-08-26 (inclusive)
    let users = await User.find({ dateCreated: { $gte: date1, $lte: date2 } });
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
