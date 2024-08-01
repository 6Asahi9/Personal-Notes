
#include <iostream>
#include <cmath> 
//  && = checks if both the condition are true
//  || = checks if one of the condition is true
// /! = reverses the logical state of the its operand

int main() {
    double temp;
    bool sunny;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temp;

//? if(temp > 0 && temp < 30){
    if(temp <= 0 || temp >= 30){
        //?std::cout<<"temp is quite nice ";
        std::cout<<"temp is quite bad "<<'\n';
    }
    else{
        //?std::cout<<"temp is not so nice ";
        std::cout<<"temp is so nice "<<'\n';
    }

    std::cout<<",by the way is it sunny out there?";
    std::cin>>std::boolalpha>>sunny;
    if(!sunny){
        std::cout<<"it is not sunny out there ";
    }
    else{
        std::cout<<"it is sunny out there ";
    }

    return 0;
}