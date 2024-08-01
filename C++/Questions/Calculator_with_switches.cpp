
#include <iostream>
#include <cmath> 

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"**************CALCULATOR**************"<<'\n';
    
    std::cout<<"Enter operator (+ - * /)"<<'\n';
    std::cin>>op;

    std::cout<<"Enter first number"<<'\n';
    std::cin>>num1;

    std::cout<<"Enter second number"<<'\n';
    std::cin>>num2;

    switch(op){
        case '+': //! remember to put them into single quotes
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout<<"Invalid operator"<<'\n';
            break;
            
    }
    std::cout<<"Result: "<<result<<'\n';

    std::cout<<"**************************************"<<'\n';

    return 0;
}