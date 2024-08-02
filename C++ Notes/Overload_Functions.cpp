
#include <iostream>

void bakerPizza();
void bakerPizza(std::string toppings1);
void bakerPizza(std::string toppings1 , std::string toppings2);
int main(){

//even tho all of them have a same function name, i can crete multiple functions to use them separately
    //?bakerPizza(); //normal answer
    //?bakerPizza("pepperoni"); //here is your pepperoni pizza!
    bakerPizza("pepperoni","mushrooms"); //here is your pepperoni and mushrooms pizza!
    
    return 0;
};
void bakerPizza(){
    std::cout <<"here is your pizza!" <<std::endl;
}
void bakerPizza(std::string topping1){
    std::cout <<"here is your "<< topping1 <<" pizza!" <<std::endl;
}
void bakerPizza(std::string toppings1 , std::string toppings2){
    std::cout <<"here is your "<< toppings1 <<" and " <<toppings2 <<" pizza!" <<std::endl;
}