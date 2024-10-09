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
  document.getElementById("myh1").textContent = `Welcome back ${username}`; //the screen will change from hello to welcome back asahi
};
