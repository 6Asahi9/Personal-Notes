//arithmetic operators = returns the result of a specific arithmetic operation (+ - * /)

//! remember this order :
//? first parentheses
//? second multiplications and division
//? third addition and subtraction

#include <iostream>
#include <vector>

int main() {

    int students = 20;
    //?students = students + 1;
    //or we can do
    //?students++;
    //or
    students += 1;
    std::cout << students << std::endl; //same can be done for -- or *= 

    //now what if we try to divide a even number with odd
    int cars = 10; //?but if we use double instead of int , the output will be 3.333..
    int drivers = 3;
    double sales = cars /=drivers; 
    //! including double here wont change anything and number will be shown without decimal point
    std::cout <<"sales are " <<sales << std::endl; //this will show 3

    
    //!remember the order in this
    int houses = 10 + 6 - (5 + 4) * 3 / 2;
    std::cout << houses << std::endl; //this will show 3

    
    return 0;
}

