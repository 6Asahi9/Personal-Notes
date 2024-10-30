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
