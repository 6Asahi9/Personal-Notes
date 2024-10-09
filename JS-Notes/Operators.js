// arithmetic operators = operands (value, variable, ect)
//                         operators (+  -  *  /)
//                         ex. 11 = x + 5;
let students = 30;
students = students + 2; //same can be done for -2(28 students) , /2and(15 students) *3(90 students) and to add power we do
//                         ** eg, students = students**2 , it will be 900 or students**3 wll be 27000
//                        but if i do students = students %2 (0 students ) If you use the % operator instead of the / operator, it performs the modulus operation, which returns the remainder of the division
//                         but if we did students were 31 then students % 3 (1 students)
//let students =31;
//let extraStudents = students % 3;
//console.log(extraStudents);       it will show 1 student as extra

//now to make things fast we will do.. these are called augmented assignment operators
//students += 1; it will give us 31 students   or you can add students ++students; it will result in 31, //remember students is after ++
//students -= 1 , 29 students and so on...     or you can add students --students; it will result in 29

console.log(students);

/*IMPORTANT
    Operator Procedure  , steps:
    1. parenthesis( ) borders
    2. exponents  **power
    3. multiplication and divisions and modules 
    4. addition and subtraction  
 */
let result = 1 + 2 * 3 + 4 ** 2; //it will be 23
console.group(result);
