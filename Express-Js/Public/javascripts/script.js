// Get the button element by its ID
const button = document.getElementById('button');

// Add a click event listener to the button
button.addEventListener('click', function() {
  // Get the result element by its ID
  const result = document.getElementById('result');

  // Change the text of the result element to "Script working"
  result.textContent = 'Script working';
});