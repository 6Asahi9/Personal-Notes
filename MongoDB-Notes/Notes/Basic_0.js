// ! make sure to install and run mongodb compass app and make a database
// ! and then connect it here

// this will go into users.js in route folder

const mongoose = require("mongoose");
mongoose.connect("mongodb://127.0.0.1:27017/MyMongoDB");
// 127.0.0.1 means localhost and 27017 is the code / port for that
// MongoDB uses port 27017 by default for its server.
// A local server running a Node.js application typically uses port 3000 by default.

// schema
const userSchema = new mongoose.Schema({
  username: String,
  name: String,
  age: Number,
});

// now we will export this thing into a collection
module.exports = mongoose.model("users", userSchema);
// this users is the name of the collection

// so this whole thing is inside a database called "database-Name" from
// line 2 , which has a collection inside of it called "users" and then inside
// users we have a collection of data types/ scheme called "userSchema"
