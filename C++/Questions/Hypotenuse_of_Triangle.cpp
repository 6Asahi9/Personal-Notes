//calculate hypotenuse of a right angled triangle
//? formula is c = square root of a square + b square
#include <iostream>
#include <cmath> //? rest of the funtions are in this

int main() {
    
    double a;
    double b;
    double c;
    
    std::cout <<"Enter side A: "<<'\n';
    std::cin >> a;
    
    std::cout <<"Enter side B: "<<'\n';
    std::cin >> b;
    
    c = sqrt(pow(a, 2) + pow(b, 2)); // this will return 5
    std::cout<<"side C is : "<<c<<'\n'; 

    return 0;
}