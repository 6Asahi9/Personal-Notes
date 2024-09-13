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
    // now if i wanna filter document based on a specific field's length
    let users = await User.find({
      // we'll use $expr which stands for expression which is used for complex situations
      $expr: {
        // and always takes two values since we are comparing them
        $and: [
          {
            // $strLenCP is a MongoDB operator that calculates the number of code points in
            // a string. It stands for "String Length in Code Points."
            $gte: [{ $strLenCP: "$username" }, 0],
            // ! remember to use $ with username
          },
          {
            $lte: [{ $strLenCP: "$username" }, 5],
          },
        ],
      },
    });
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
