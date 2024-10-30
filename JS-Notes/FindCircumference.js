// const = a variable that cant be changed once you assign them , its a short form of constants

//in this learn how to find a circumference of a circle , by comparing one done with let and other with const

//let pi = 3.14;   now someone can change the value of pi and the program wont wont thats why we will put...
const PI = 3.14;
let radius;
let circumference;
//window prompt can be used when you don't wanna make the whole button shit
//radius = window.prompt( "enter the radius of a circle"); //now its a string so convert it into number
//radius = Number(radius);

//circumference = 2 * pi * radius //actual formula for circumference  2πr (to write π , hold alt and write 227 on keypad)

document.getElementById("mySubmit").onclick = function () {
  let radius = document.getElementById("myText").value; //we will take the value and then...
  radius = Number(radius); //convert it into number from here
  //if don't have value of PI then use Math.PI
  circumference = 2 * PI * radius;
  //this so value will come out in centimeters
  document.getElementById("myh3").textContent = circumference + "cm";
};
