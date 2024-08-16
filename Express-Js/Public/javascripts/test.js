const button = document.getElementById('button');
const result = document.getElementById('result');

button.addEventListener('click', function() {
    result.textContent = 'Script working';
    console.log('Button clicked');
});