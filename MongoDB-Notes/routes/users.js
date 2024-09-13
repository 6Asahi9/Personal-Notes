const mongoose = require("mongoose");
const pln = require("passport-local-mongoose");

// Connect to MongoDB
mongoose
  .connect("mongodb://127.0.0.1:27017/Authentication", {
    serverSelectionTimeoutMS: 30000,
  })
  .then(() => console.log("MongoDB connected successfully"))
  .catch((err) => console.log("MongoDB connection error:", err));

const userSchema = mongoose.Schema({
  username: String,
  password: String,
  secret: String,
});

userSchema.plugin(pln); // Use the plugin

// Create the User model
const User = mongoose.model("User", userSchema);

// Export the model and Passport methods
module.exports = {
  User: User,
  serializeUser: User.serializeUser.bind(User),
  deserializeUser: User.deserializeUser.bind(User),
};
