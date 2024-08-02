#include <iostream>

std::string concatString(std::string firstName, std::string secondName);
//--------------------------------------------------------------------------
double square(double length);
double cube(double length);
int main() { 

    double length = 5.0;
    double area = square(length); //send to function
    double cube1 = cube(length); // send to function

    std::cout << "The area of the square is " << area <<" cm^2" <<std::endl;
    std::cout << "The area of the cube is " << cube1 <<" cm^3" <<std::endl;
    //----------------------------------------------------------------------

    std::string firstName = "bro";
    std::string lastName = "code";
    
    std::string fullName = concatString(firstName, lastName); // sent to function 
    std::cout << "The full name is " << fullName << std::endl;

    return 0;
}
//! now since we are returning a double value from this , change the name from void to double
double square(double length){
    double result = length * length;
    return result; 
};
double cube(double length){
    return length * length *length;
};

//--------------------------------------------------------------------------
//! you can change the reference variable name too
//? std::string concatString(std::string abc, std::string xyz){
//?    return abc + " " + xyz;
//?};
std::string concatString(std::string firstName, std::string secondName){
    return firstName + " " + secondName;
};