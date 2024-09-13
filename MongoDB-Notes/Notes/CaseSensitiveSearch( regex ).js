var express = require("express");
var router = express.Router();
const User = require("./users");

// Root route
router.get("/", function (req, res, next) {
  res.render("index", { title: "My Application" });
});

// Create a new user
router.get("/create", async function (req, res, next) {});

// let say we have three users "sarah", "emma" and "lilly"
router.get("/users", async function (req, res, next) {
  try {
    // lets say i have a username called sarah and in database it is also sarah
    // but if i use Sarah with capital S , it wont find the user, hence its case sensitive
    //! for that we will use RegExp() which takes two variables inside "search" and "flags"
    // "i" flag makes it case insensitive
    //? const regex = new RegExp("Sarah", "i");
    //? let users = await User.find({ nickname: regex });
    // now problem with this is if someone's nickname is sarahAVI or sarahBTS
    // it will show them too with sarah, since their name includes "sarah"

    // --------------------------------

    // now to fix this regex have two terms "^" which is for the front letter and "$" which is for the end letter
    const regex = new RegExp("^SaRaH$", "i");
    let users = await User.find({ nickname: regex }); // can add findOne too here
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

module.exports = router;
