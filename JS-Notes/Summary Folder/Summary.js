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

// !
