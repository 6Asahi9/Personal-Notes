//* creation, reading, updating, delete
// this file will go in index,js in route folder
// install a json viewer extension on browser for convenience too

var express = require("express");
var router = express.Router();

// now we exported a model from users.js and now will import it here
const userModel = require("./users");

// -----------------------------IGNORE-----------------------------
router.get("/", function (req, res, next) {
  res.render("index", { title: "MongoDB" });
});
// ----------------------------------------------------------------

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

module.exports = router;
