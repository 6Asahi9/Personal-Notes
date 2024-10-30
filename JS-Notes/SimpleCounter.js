const decrease = document.getElementById("decrease");
const reset = document.getElementById("reset");
const increase = document.getElementById("increase");
const ccountlabel = document.getElementById("countlabel");
let count = 0;

increase.onclick = function () {
  count++;
  ccountlabel.textContent = count;
};
decrease.onclick = function () {
  count--;
  ccountlabel.textContent = count;
};
reset.onclick = function () {
  count = 0;
  ccountlabel.textContent = count;
};
