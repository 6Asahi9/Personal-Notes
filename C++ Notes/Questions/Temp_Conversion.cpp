
#include <iostream>
#include <cmath> 


int main() {
    double temp;
    char unit;

    std::cout<<"************** TEMPERATURE CONVERSION **************"<<'\n';

    std::cout <<"F = Fahrenheit\n";
    std::cout <<"C = Celsius\n";
    std::cout<<"what unit would you like to use\n";
    std::cin>>unit;

    //use single quotes
    if(unit == 'F' || unit == 'f'){
        std::cout<<"enter a temperature in celsius\n";
        std::cin>>temp;

        temp = (temp * 1.8) + 32;
        std::cout<<"the temperature in "<<unit<<" is "<<temp<<'\n';
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout<<"enter a temperature in fahrenheit\n";
        std::cin>>temp;
        temp = (temp - 32) / 1.8;
        std::cout<<"the temperature in "<<unit<<" is "<<temp<<'\n';
    }
    else{
        std::cout<<"invalid input\n";
    }

    std::cout<<"****************************************************"<<'\n';

    return 0;
}