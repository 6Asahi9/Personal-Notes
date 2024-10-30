// ternary opedrator = its a shortcute to if{} and else{} statement helps to assign a varaible to assign
//                      based on a condition
//                      condition ?   codeifTrue :  codeifFalse :

//example :-
// let age = 25;
// let message = age>=18 ? `you are an adult`: `you are not a minor`;
// console.log(message);

let time = 9;
let greetings = time < 12 ? `good morning` : `good afternoon`;
console.log(greetings);

let isStudent = false; //it is a boolean
let message = isStudent
  ? `you are a student`
  : `you are not a student get lost bro`;
console.log(message);

let pruchaseAmount = 125;
let discount = pruchaseAmount >= 100 ? 10 : 0;
let totalAfterDiscount = purchaseAmount - (purchaseAmount * discount) / 100; // 125 - {125*10/100}
console.log(`Your total after applying the discount is $${totalAfterDiscount}`);
