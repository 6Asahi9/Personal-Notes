// .checked = property that determines the checked state of an HTML checkbox or radio button element

const mycheckbox = document.getElementById(`mycheckbox`);
const mastercardbtn = document.getElementById(`mastercardbtn`);
const paypalbtn = document.getElementById(`paypalbtn`);
const visabtn = document.getElementById(`visabtn`);
const mysubmit = document.getElementById(`mysubmit`); // Corrected ID
const subresult = document.getElementById(`subresult`);
const paymentresult = document.getElementById(`paymentresult`);

mysubmit.onclick = function () {
  // Corrected variable name
  if (mycheckbox.checked) {
    subresult.textContent = `you are subscribed *happy emoji*`;
  } else {
    subresult.textContent = `you are not subscribed *sad emoji*`;
  }

  if (visabtn.checked) {
    paymentresult.textContent = `you are paying with visa`;
  }
  if (mastercardbtn.checked) {
    paymentresult.textContent = `you are paying with mastercard`;
  }
  if (paypalbtn.checked) {
    paymentresult.textContent = `you are paying with paypal`;
  } else {
    paymentresult.textContent = `you must select a payment type`;
  }
};
