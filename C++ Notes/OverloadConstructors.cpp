#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <memory>

// overloaded constructors = multiple constructors with same name but different parameters 
//                           allows for varying arguments when instantiating an object
class Pizza{
    public:
    std::string topping1;
    Pizza(std::string x){
        this->topping1 = x;
    }
// how about two arguments
    std::string topping2;
    Pizza(std::string x, std::string y){
        this->topping1 = x;
        this->topping2 = y;
    }
//now what if there are no arguments
    Pizza(){}    
}; 
int main(){
    Pizza pizza1("pepperoni");
    std::cout << pizza1.topping1 << std::endl;

    Pizza pizza2("pepperoni", "mushrooms");
    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;
    return 0;

    Pizza pizza3; //no output
    
    return 0;

}