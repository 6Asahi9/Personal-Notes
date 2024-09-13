// connect to the server
const mongoose = require("mongoose");
mongoose.connect("mongodb://127.0.0.1:27017/database-Name");

// make a scheme
const userSchema = new mongoose.Schema({
  username: String,
  name: String,
  age: Number,
});

// now export it
module.exports = mongoose.model(users, userSchema); //users just a name

// ----------------------------------------------------------------

// create, read, update, delete

// * create
router.get("/create", async (req, res) => {
  try {
    // ------------------------------------------------------------
    // we used async and await since we want to send the message once its actually completed
    const createdUser = await userModel.create({
      //this always takes a object inside
      username: "JohnSmith",
      name: "John",
      age: 38,
    });
    res.send(createdUser); //and then we can find it in createdUser
    // ------------------------------------------------------------
  } catch (error) {
    console.error("Error creating user:", error);
    res.status(500).send("An error occurred while creating the user.");
  }
});

// ----------------------------------------------------------------

// * reading
router.get("/find", async (req, res) => {
  try {
    // ------------------------------------------------------------
    const allUsers = await userModel.find();
    res.send(allUsers);
    // ------------------------------------------------------------
  } catch (error) {
    console.error("Error creating user:", error);
    res.status(500).send("An error occurred while finding the user.");
  }
});

// now there is another where if you want to find a specific user
router.get("/findOne", async (req, res) => {
  try {
    // ------------------------------------------------------------
    const OneUser = await userModel.findOne({ name: "John" }); //it will find the user john
    res.send(OneUser);
    // ------------------------------------------------------------
  } catch (error) {
    console.error("Error creating user:", error);
    res.status(500).send("An error occurred while finding the user.");
  }
});

// ----------------------------------------------------------------

// * delete
router.get("/delete", async (req, res) => {
  try {
    // ------------------------------------------------------------
    const deletedUser = await userModel.findOneAndDelete({
      username: "JohnSmith",
    });
    res.send(deletedUser);
    // ------------------------------------------------------------
  } catch (error) {
    console.error("Error creating user:", error);
    res.status(500).send("An error occurred while deleting the user.");
  }
});

// ----------------------------------------------------------------

// * updating

router.get("/update", async (req, res) => {
  try {
    // ------------------------------------------------------------
    const userToUpdate = await userModel.findOne({ name: "John" });

    if (!userToUpdate) {
      return res.status(404).send("User not found.");
    }

    const updatedUser = await userModel.findByIdAndUpdate(
      userToUpdate._id,
      {
        $set: {
          name: "John Doe", // Update the name field
          age: 39, // Update the age field
        },
      },
      { new: true } // Return the updated document
    );

    res.send(updatedUser);
    // ------------------------------------------------------------
  } catch (error) {
    console.error("Error updating user:", error);
    res.status(500).send("An error occurred while updating the user.");
  }
});

// ----------------------------------------------------------------

// ! session
//* npm install express-session

// make sure this is in app.js
var session = require("express-session"); //this is for the session file

app.use(
  session({
    resave: false, // don't save if the session value is the same already as previous one
    saveUninitialized: false, //don't save unnamed values or files
    secret: "your-secret-key", //this should be a secret key for your application.
    // this key will be used to encrypt the data
  })
);
// to create a session
req.session.whateverName = "do whatever";
// to read
req.session.whateverName;
// to delete
req.session.destroy;

// ----------------------------------------------------------------

// ! cookies
//* npm install express-session
//? express-session handles both sessions and cookies

// make sure to have this in app.js
var cookieParser = require("cookie-parser"); //this is for cookies file

app.use(cookieParser()); //this is for cookie file

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

// ----------------------------------------------------------------

// ! flash messages
// * install connect-flash
// ! you can not use flash without expression-session

var flash = require("connect-flash"); // this is from app.js
app.use(flash()); // this is from app.js too

// ----------------------------------------------------------------

// ! case sensitive searches
router.get("/users", async function (req, res, next) {
  try {
    const regex = new RegExp("^SaRaH$", "i");
    let users = await User.find({ nickname: regex }); // can add findOne too here
    res.json(users);
  } catch (error) {
    console.error("Error fetching users:", error);
    res.status(500).send("Internal Server Error");
  }
});

// ----------------------------------------------------------------

// ! search inside the array
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

// ----------------------------------------------------------------

// ! search with dates
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

// ----------------------------------------------------------------

// ! filter if some document exists in the array or not
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

// ----------------------------------------------------------------

//! Complex queries with $expr
router.get("/users", async function (req, res, next) {
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
});

// ----------------------------------------------------------------

//! Authentication&Authentication
// its images are in the Authentication sand Authentication folder

// ----------------------------------------------------------------
