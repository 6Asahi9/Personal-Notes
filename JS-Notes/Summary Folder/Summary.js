// ----------------------------------------------------------------
// !Basic
// console.log(`hello`);
// console.log(`i like pizza`); always use ` and not ' pr ""

// this is an alert
// window.alert('this is an alert');  this can be useful to give important messages like Alert: Transaction Issue Detected
// window.alert('i like pizza');

// this is to change the shit written in those id
// document.getElementById('myh1').textContent="hello";
// document.getElementById('myp').textContent="i like pizza"

//variable = a container that stores a value.    its like 12x - 3 = 4, x is the variable here
//          behaves as if it were the value it contains
// it has steps to create a variable
// 1. declaration  let x;    x here is a unique variable name
// 2. assignment   x = 100; ....
// let x;
// x = 100;  //or you can add both together like let x = 100;
// console.log(x);  now in console it will show the value of as 100
//example:
// let age= 15;
// console.log(`you are ${age} years old`); //you can add $ to put it as an sentence
//lets say you wanna show the data type of a variable then..
// console.log(typeof age);    this will show data type as "numbers"

//strings
// let firstName= "bro"; // you can also do email as let email="fake@gmail.com and console.log(email);"
// console.log(typeof firstName);
// console.log(`your name is ${firstName}`);

//booleans , these are either true or false and typically used as flags
// let online = true;
// let forSale = false;
// console.log(`bro is ${online}`);
// console.log(`is this car ${forSale}`);

//lets mix everything together
// let fullName="UniqueName";
// let age="22";
// let isStudent= false; //it doesn't need " "

// document.getElementById("p1").textContent = `your name is${fullName}`;
// document.getElementById("p2").textContent = `your age is${age}`;
// document.getElementById("p3").textContent = `you are a student ${isStudent}`;

// to connect from html use
//  <script src="basic.js"></script>

// ----------------------------------------------------------------

// !Operator
// arithmetic operators = operands (value, variable, ect)
//                         operators (+  -  *  /)
//                         ex. 11 = x + 5;
let students = 30;
students = students + 2; //same can be done for -2(28 students) , /2and(15 students) *3(90 students) and to add power we do
//                         ** eg, students = students**2 , it will be 900 or students**3 wll be 27000
//                        but if i do students = students %2 (0 students ) If you use the % operator instead of the / operator, it performs the modulus operation, which returns the remainder of the division
//                         but if we did students were 31 then students % 3 (1 students)
//let students =31;
//let extraStudents = students % 3;
//console.log(extraStudents);       it will show 1 student as extra

//now to make things fast we will do.. these are called augmented assignment operators
//students += 1; it will give us 31 students   or you can add students ++students; it will result in 31, //remember students is after ++
//students -= 1 , 29 students and so on...     or you can add students --students; it will result in 29

console.log(students);

/*IMPORTANT
    Operator Procedure  , steps:
    1. parenthesis( ) borders
    2. exponents  **power
    3. multiplication and divisions and modules 
    4. addition and subtraction  
 */
let result = 1 + 2 * 3 + 4 ** 2; //it will be 23
console.group(result);

// ----------------------------------------------------------------

// !Submit button interaction
let username; //this is an easy way to crate the button to submit

username = window.prompt(`whats your user name?`);

console.log(username);

// if i only accepts number
do {
  username = window.prompt("Please enter your username:");
} while (username !== null && !isNaN(username));

console.log(username); //NaN means not a number

// connect to the button
document.getElementById("mySubmit").onclick = function () {
  /*here well write we gonna do after the click*/
  username =
    document.getElementById(
      "myText"
    ).value; /*this value is here cos we need the value of text box and make sure its a lowercase v when writing .value*/
  //console.log(username);
  document.getElementById("myh1").textContent = `Welcome back ${username}`; //the screen will change from hello to welcome back "theName"
};

// ----------------------------------------------------------------

// ! String, booleans and integer
//type conservation = change the datatype of a value to another like
//            (strings, numbers, boolens)

let age = window.prompt("how old are you?");
//lets say user puts age as 25 so without number function , it will show the age as 251
age = Number(age); //this is a number function and will convert other data type to number
age += 1; //getting plus one from here , but cos of number function it will show it as 26 now
function incrementAge() {
  let age = window.prompt("how old are you?");
  age = Number(age);
  return (age += 1);
}
let newAge = incrementAge();
console.log(newAge);

console.log(age, typeof age); //typeof is not important but it will show that this whole thing is a number type

//or

let x = "pizza";
let y = "pizza";
let z = "pizza";

x = Number(x); // it will show NaN since pizza is not a number
y = String(x); //always write it will uppercase letter / its already a string so it will just show pizza
z = Boolean(x); // it will show true, yeh thats it

//but if we want only strings and not numbers
let value = "Hello";

if (typeof value === "string") {
  console.log("The value is a string.");
} else {
  console.log("The value is not a string.");
}

// ----------------------------------------------------------------

// ! MATH functions

//Math = built- in obejct that provides a collection of properties and methods
//lets say you want the value of π then...

//console.log(Math.PI); //make sure there is a uppercase M in Math and it will give you the value as 3.14...

let a = 4.4;
let b = 2;
let c;
z = Math.round(x); //this method will round up the value and round up value of 4.4 will be shown as 4
//  z = Math.floor(x);  //this will round the value to floor means it will be 4
//  z = Math.ceil(x);   // opposoute and the value in this will be 5 , even if x is 4.2, z will still be 5
//  z = Math.trunc(x); // it will remove the decimel and show the value as 4
//  z = Math.sqrt(x); // it will show the square root of x
//  z = Math.log(x);  // used for to finding logs

//  z = Math.sin(x);  // this is Trigonometry
//  z = Math.cos(x);
//  z = Math.tan(x);

//  z = Math.abs(x); //it will give the absolute value of that x , if x is in negative , this will make it posituve
//  z = Math.sign(x); // it is used to check the sign of number, lets say x is -3.12 , this will show the sign as -1 cos x was negative

// let say x = 3 , y = 2 , z = 1
//  z = Math.max(x, y, z); //this will show the maximum no. which is 3
//  z = Math.min(x, y, z); // and this will show minimum , which is 1

z = Math.pow(x, y); // it will show the power like , 4.4 power of 2 will be 19.39
console.log(z);

// ----------------------------------------------------------------

// ! Ternary Operators
// ternary opedrator = its a shortcute to if{} and else{} statement helps to assign a varaible to assign
//                      based on a condition
//                      condition ?   codeifTrue :  codeifFalse :

//example :-
// let age = 25;
// let message = age>=18 ? `you are an adult`: `you are not a minor`;
// console.log(message);

let time = 9;
let greetings = time < 12 ? `good morning` : `good afternoon`;
console.log(greetings);

let isStudent = false; //it is a boolean
let message = isStudent
  ? `you are a student`
  : `you are not a student get lost bro`;
console.log(message);

let pruchaseAmount = 125;
let discount = pruchaseAmount >= 100 ? 10 : 0;
let totalAfterDiscount = purchaseAmount - (purchaseAmount * discount) / 100; // 125 - {125*10/100}
console.log(`Your total after applying the discount is $${totalAfterDiscount}`);

// ----------------------------------------------------------------

// ! CharArt() functions for strings in CharArt.js

// ----------------------------------------------------------------
