// random no. geneerator with Math
//rnadomnum is a variable and can be anything
//  let randomnum = Math.random();  //this will give a random number between 0 nad 1 with all the decimenls
//  console.log(randomnum);

// lets say we want a random number between 1 and 6
// use Math.floor to remove decimals and multiply Math.random with 6 and by adding +1 we are making the minimum no. be atleast 1
//                   make sure to not add anything in ( ) in Math.radnom() but you can add outisde
// let x = Math.floor(Math.random() * 6 + 1);
// console.log(x);

const mylabel = document.getElementById("mylabel");
const mybutton = document.getElementById("mybutton");
const min = 1;
const max = 100;
let randomnum;

mybutton.onclick = function () {
  let randomnum = Math.floor(Math.random() * (max - min + 1)) + min;

  mylabel.textContent = randomnum;
};

//but if i want my user to input max and min value
document.getElementById("generate").onclick = function () {
  const min = parseInt(document.getElementById("min").value);
  const max = parseInt(document.getElementById("max").value);

  if (isNaN(min) || isNaN(max)) {
    alert("Please enter valid numbers for min and max.");
    return; // Added return statement
  } else if (min >= max) {
    alert("Min must be less than max.");
    return; // Added return statement
  } else {
    const randomnum = Math.floor(Math.random() * (max - min + 1)) + min;
    document.getElementById("result").textContent = randomnum;
    return; // Added return statement
  }
};
