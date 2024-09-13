// $and: This operator performs a logical AND operation on multiple conditions. It returns true if all the conditions are true, and false otherwise. For example:
$and: [
{ field1: { $gt: 10 } },
  { field2: { $lt: 100 } },
  { field3: { $regex: /^[a-zA-Z]+$/ } },
];

<!-- -------------------------------------------------------------- -->

// $gt: This operator performs a greater than comparison. It returns true if the value of the field is greater than the specified value, and false otherwise. For example:
$gt: 10;

<!-- -------------------------------------------------------------- -->

// $regexMatch: This operator performs a regular expression match on a string field. It returns true if the string matches the specified regular expression pattern, and false otherwise. For example:
$regexMatch: {
input: "$stringField",
  regex: "^[a-zA-Z0-9]+$",
}

<!-- -------------------------------------------------------------- -->

// $or: This operator performs a logical OR operation on multiple conditions. It returns true if at least one of the conditions is true, and false otherwise. For example:
$or: [
{ field1: { $eq: "value1" } },
{ field2: { $eq: "value2" } },
]

<!-- -------------------------------------------------------------- -->

// $not: This operator performs a logical NOT operation on a condition. It returns true if the condition is false, and false if the condition is true. For example:
$not: { field1: { $eq: "value" } }

<!-- -------------------------------------------------------------- -->

// $eq: This operator performs an equality comparison. It returns true if the value of the field is equal to the specified value, and false otherwise. For example:
$eq: "value"

<!-- -------------------------------------------------------------- -->

// $lt: This operator performs a less than comparison. It returns true if the value of the field is less than the specified value, and false otherwise. For example:
$lt: 100

<!-- -------------------------------------------------------------- -->

// $size: This operator returns the number of elements in an array field. It can be used in conjunction with $expr to compare the length of an array field. For example:
$size: "$arrayField"

<!-- -------------------------------------------------------------- -->

// $exists: This operator checks if a field exists in a document. It returns true if the field exists, and false otherwise. For example:
$exists: true

<!-- -------------------------------------------------------------- -->

// $in: This operator checks if a value is in an array. It returns true if the value is in the array, and false otherwise. For example:
$in: ["value1", "value2"]

<!-- -------------------------------------------------------------- -->
