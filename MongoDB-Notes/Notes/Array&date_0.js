// this is users.js
const mongoose = require("mongoose");

// Connect to MongoDB
mongoose
  .connect("mongodb://127.0.0.1:27017/IntermediateMongoDB", {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  })
  .then(() => console.log("MongoDB connected successfully"))
  .catch((err) => console.log("MongoDB connection error:", err));

const userSchema = mongoose.Schema({
  username: String,
  nickname: String,
  description: String,
  categories: {
    type: [String],
    default: [],
  },
  dateCreated: {
    type: Date,
    default: Date.now,
  },
});

module.exports = mongoose.model("User", userSchema);
