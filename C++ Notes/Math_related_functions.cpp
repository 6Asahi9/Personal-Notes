
#include <iostream>
#include <cmath> //? rest of the funtions are in this

int main() {
   
    int x = 3;
    int y = 4;
    double z;
    z = std::max(x, y); //it will show 4 
    std::cout << z<<'\n';
    
    z = std::min(x, y); //it will show 3
    std::cout << z<<'\n';

    z = pow(2, 3); //this is power
    std::cout << z<<'\n'; //it will show 8

    z = sqrt(9); //this is square root
    std::cout << z<<'\n'; //it will show 3

    z = abs(-7); //this is absolute value, turn any number into positive value
    std::cout << z<<'\n'; //it will show 7

    double a = 5.6;
    z = round(a); // this will round off the value
    std::cout << z<<'\n'; //it will show 6
    //?there are specific functions that will either round the value only UP or DOWN
    //? for UP , its z = ceil(a);
    //? for DOWN, its z = floor(a);

    //! for more functions go to https://www.cplusplus.com/reference/cmath/ 
    //? there are a lot of useful functions there

    return 0;
}