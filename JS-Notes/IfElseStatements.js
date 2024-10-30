// if statesments = baiscally if, else or elif in python, if this is is false then do that , ect

// let age = 25;
// let hasLicense = false; //these are the inputs tat user will fill

// if(age >= 18){
//     console.log(`you are old enough to drive`);

//     if(hasLicense){
//         console.log(`you have your license`);
//     }
//     else{
//         console.log(`you do not have your license`);
//     }
// }
// else{
//     console.log(`you must be above or equal to 18 to drive`);
// }

//OR
const mytext = document.getElementById(`mytext`);
const mysubmit = document.getElementById(`mysubmit`);
const resultElement = document.getElementById(`resultElement`);
let age; //leaving it undefined

mysubmit.onclick =
  function () {
    age = mytext.value;
    age = Number(age);
    if (age >= 100) {
      console.log(`You are too old grandpa to enter.`);
      resultElement.textContent = `You are too old grandpa to enter.`;
    } else if (age == 0) {
      console.log(`you can't enter you were just born`);
      resultElement.textContent = `you cant't enter you were just born`;
    } else if (age <= 0) {
      console.log(`Your age can't be zero or negative.`);
      resultElement.textContent = `Your age can't be zero or negative.`;
    } else if (age < 18) {
      console.log(`You are too young to enter go ask your mother.`);
      resultElement.textContent = `You are too young to enter go ask your mother.`;
    } else {
      console.log(`You are allowed to enter , congrats .`);
      resultElement.textContent = `You are allowed to enter , congrats .`;
    }
  } <
  //what if i want my user to choose the true and false
  //html
  //<form>
  //<p>Is the sky blue?</p>
  //<input type="radio" id="true" name="answer" value="true">
  //<label for="true">True</label><br>
  //<input type="radio" id="false" name="answer" value="false">
  //<label for="false">False</label><br>
  //</form>

  //OR you can simplified it by...

  //   <label for="userage">Enter your age:</label>
  //<input type="text" id="userage" name="userage" required>
  br >
  //<input type="radio" id="true" name="license" value="true" required>
  //<label for="true">True</label><br>
  //<input type="radio" id="false" name="license" value="false" required>
  //<label for="false">False</label><br>
  //<button onclick="checkLicense()">Check License</button>

  //<h1 id="result"></h1>

  function checkLicense() {
    let age = parseInt(document.getElementById("userage").value);
    let license;

    // Get the value of the selected radio button
    let licenseTrue = document.getElementById("true").checked;
    let licenseFalse = document.getElementById("false").checked;

    // Set the value of the license variable based on the selected radio button
    if (licenseTrue) {
      license = true;
    } else if (licenseFalse) {
      license = false;
    }

    // Check age and license status
    if (age >= 18 && license) {
      document.getElementById(
        "result"
      ).textContent = `You are ${age} years old, above 18, and have a license.`;
    } else if (age >= 18 && !license) {
      document.getElementById(
        "result"
      ).textContent = `You are ${age} years old above 18 but don't have a license.`;
    } else if (age < 18) {
      document.getElementById(
        "result"
      ).textContent = `You are ${age} years oldn below 18 and not eligible to have a license.`;
    }
  };

//but what if i want multiple boxes checked but still have a limit
//html
//<form>
//<p>Select three options:</p>
//<input type="checkbox" id="option1" name="option1" value="Option 1">
//<label for="option1">Option 1</label><br>
//<input type="checkbox" id="option2" name="option2" value="Option 2">
//<label for="option2">Option 2</label><br>
//<input type="checkbox" id="option3" name="option3" value="Option 3">
//<label for="option3">Option 3</label><br>
//<input type="checkbox" id="option4" name="option4" value="Option 4">
//<label for="option4">Option 4</label><br>
//<input type="checkbox" id="option5" name="option5" value="Option 5">
//<label for="option5">Option 5</label><br>
//</form>

// <script>
// const checkboxes = document.querySelectorAll('input[type="checkbox"]');

checkboxes.forEach((checkbox) => {
  checkbox.addEventListener("click", function () {
    let checkedCount = 0;
    checkboxes.forEach((checkbox) => {
      if (checkbox.checked) {
        checkedCount++;
      }
    });
    if (checkedCount > 3) {
      this.checked = false;
    }
  });
});
// </script>
