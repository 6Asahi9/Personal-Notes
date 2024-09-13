// this is index.js
var express = require("express");
var router = express.Router();
const User = require("./users");

// Root route
router.get("/", function (req, res, next) {
  res.render("index", { title: "My Application" });
});

// Create a new user
// router.get("/create", async function (req, res, next) {
//   try {
//     let userData = await User.create({
//       username: "designer",
//       nickname: "lily",
//       description: "she is the designer",
//       categories: ["designer", "clothing", "fashion"],
//     });
//     res.send(userData);
//   } catch (error) {
//     console.error("Error creating user:", error); // Log the error
//     res.status(500).send("Internal Server Error"); // Send a generic error response
//   }
// });
router.get("/users", async function (req, res, next) {
  try {
    let users = await User.find();
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
