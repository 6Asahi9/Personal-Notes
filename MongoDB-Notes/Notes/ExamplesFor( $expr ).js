// Comparing Fields: You can compare fields within the same document
//  using $expr. For example, if you have a collection of documents with
// fields score and maxScore, you can find documents where score is greater than
// maxScore using $expr:
db.collection.find({
  $expr: { $gt: ["$score", "$maxScore"] },
});

// String Manipulation: MongoDB provides several string manipulation operators, such as
// $concat, $substr, and $toLower. You can use $expr to combine these operators and
// perform complex string operations. For example, if you have a collection of documents
// with fields firstName and lastName, you can find documents where the combined first and
// last names start with a specific letter:
db.collection.find({
  $expr: {
    $eq: [
      { $substr: [{ $concat: ["$firstName", " ", "$lastName"] }, 0, 1] },
      "A",
    ],
  },
});

// Array Manipulation: MongoDB provides several array manipulation operators, such as $size,
// $arrayElemAt, and $in. You can use $expr to combine these operators and perform complex
// array operations. For example, if you have a collection of documents with fields tags and
// category, you can find documents where the tags array contains a specific value and the category is not empty:
db.collection.find({
  $expr: {
    $and: [
      { $in: ["specificValue", "$tags"] },
      { $gt: [{ $size: "$category" }, 0] },
    ],
  },
});

// Regular Expression: You can use $regex to perform regular expression matching on string
// fields. For example, if you have a collection of documents with a field email, you can
// find documents where the email address contains the domain "gmail.com" using $regex:
db.collection.find({
  email: { $regex: /gmail\.com$/i },
});

// Greater Than or Equal To (`$gte`) and Less Than or Equal To (`$lte`): You can use $gte
// and $lte to find documents where a field is within a specific range. For example, if you
// have a collection of documents with a field age, you can find documents where the age is
// between 18 and 30 using $gte and $lte:
db.collection.find({
  age: { $gte: 18, $lte: 30 },
});

// Logical OR (`$or`): You can use $or to find documents that match any of the given conditions.
// For example, if you have a collection of documents with fields category and status, you can
// find documents where the category is either "Electronics" or "Clothing" and the status is
// "Available" using $or:
db.collection.find({
  $or: [{ category: "Electronics" }, { category: "Clothing" }],
  status: "Available",
});

// Logical AND (`$and`): You can use $and to find documents that match all of the given conditions.
// For example, if you have a collection of documents with fields price, quantity, and availability,
// you can find documents where the price is greater than $100, the quantity is less than 10, and the
//  availability is "In Stock" using $and:
db.collection.find({
  $and: [
    { price: { $gt: 100 } },
    { quantity: { $lt: 10 } },
    { availability: "In Stock" },
  ],
});

// You can use $regexMatch to perform regular expression matching on string fields in MongoDB.
// The $regexMatch operator allows you to use JavaScript regular expressions with additional options,
// such as case-insensitive matching or Unicode support. Here's an example of how to use $regexMatch:
db.collection.find({
  email: {
    $regexMatch: {
      pattern: /gmail\.com$/i,
      options: "i",
    },
  },
});

// You can use $regexMatch in conjunction with other MongoDB operators, such as $expr, $and,
// and $or, to create more complex queries. For example:
db.collection.find({
  $expr: {
    $and: [
      { $regexMatch: { pattern: /^A/, options: "" } },
      { $regexMatch: { pattern: /[0-9]$/, options: "" } },
    ],
  },
});
