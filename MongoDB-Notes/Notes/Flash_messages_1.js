// this is an example
// lets say you have a /login and you want to send user to /profile if email and password is right
// but if password is wrong then flash will send "password wrong" in /error
// or if email/username is wrong then flash will send "username does not exists" to /error

const express = require("express");
const mongoose = require("mongoose");
const session = require("express-session");
const flash = require("connect-flash");
const User = require("./models/User"); // Import the User model

const app = express();
const port = 3000;

// Connect to MongoDB
mongoose
  .connect("mongodb://localhost:27017/yourDatabaseName", {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  })
  .then(() => {
    console.log("Connected to MongoDB");
  })
  .catch((err) => {
    console.error("Error connecting to MongoDB:", err);
  });

// Middleware to parse JSON bodies
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

// Session and Flash setup
app.use(
  session({
    secret: "yourSecret",
    resave: false,
    saveUninitialized: true,
  })
);
app.use(flash());

// Login route
app.post("/login", async (req, res) => {
  const { email, password } = req.body;

  try {
    const user = await User.findOne({ email: email });

    if (!user) {
      // Email is not found in the database
      req.flash("error", "Username does not exist");
      return res.redirect("/error");
    }

    if (user.password !== password) {
      // Password is incorrect
      req.flash("error", "Password is incorrect");
      return res.redirect("/error");
    }

    // If both email and password are correct
    res.redirect("/profile");
  } catch (err) {
    console.error("Error during login:", err);
    res.status(500).send("Internal Server Error");
  }
});

// Profile route
app.get("/profile", (req, res) => {
  res.send("Welcome to your profile!");
});

// Error route
app.get("/error", (req, res) => {
  const errorMessage = req.flash("error"); // Get the error message from flash
  res.send(`Error: ${errorMessage}`);
});

// Start the server
app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
