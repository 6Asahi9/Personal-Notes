//strings method= allow you to select or manulplate and work with text(strings)

let username = `asahi     `;
//first character will be 0 then 1 then 2...
// username.charArt();
console.log(username.charAt(0)); //this will print "a" since its the first letter , if we type 1, then it will show "s"

// username.indexof("s");
console.log(username.indexOf("s")); //basically when is the first occurance of letter "s", it will show 1 in console

//to get the last
console.log(username.lastIndexOf("a")); // it will show 2 in console

//to know the length of the string
console.log(username.length); // it will show 5

// now to trim the string
username = username.trim(); // it will delete the white space after
console.log(username);

//to make it all uppercase and..
username = username.toUpperCase(); // it will make the name in uppercase
// username = username.toLowerCase();  //to make it lower case
console.log(username);

//to repeat the string
username = username.repeat(3); //now string will repeat 3 times
console.log(username);

// to start with method
let result = username.startsWith(" "); //it will show false since "asahi" dosent start with h
// console.log(result);
//it can also work with if
if (result) {
  console.log(`your username cant be start with a blank`); //it will show false if the username starts with space
} else {
  console.log(username);
}

//another one is endwith method
let result2 = username.endsWith(" ");

if (result2) {
  console.log(`your username cant be start with a blank`); //since username haa empty space at back t will show this
} else {
  console.log(username);
}

//include method
// let name = `asahi y`
let result3 = username.includes(" ");

if (result3) {
  console.log(`your username cant include a blank`);
} else {
  console.log(username);
}

//replace method
let phonenumber = `123-345-1455`;
phonenumber = phonenumber.replaceAll(" ", "-");

console.log(phonenumber); // Output: "123-345-1455"

//or
let originalString = "Hello world!";
let newString = originalString.replaceAll("world", "universe");
console.log(newString); // Output: "Hello universe!"
// its like put first what i wanna replace and in second , put the letter i wanna replace the first with

//padstart method
// basically saying pad(add) the start of the strings with 0 until its 15 characters long
phonenumber = phonenumber.padStart(15, "0");
//there is also padend, where it will pad (add) the 0 at the end until its 15 characters long
//phonenumber = phonenumber.padEnd(15, "0");
// console.log(phonenumber);
