#include <iostream>
#include <string>

//pointer = variable that stores a memory address of another variable, sometimes its easier to work with an address
//  |      & address of-operator       |
//  |      * dereference operator      |
int main(){

    std::string name = "bro";
    //! make sure to add both * and & operator in the string 
    std::string *pName = &name;

    std::cout << pName << std::endl; // this will give the address of a variable , not value 
    //to access the value 
    std::cout << *pName << std::endl; // we will add * in this variable


    int age = 12;
    int *pSomeoneAge = &age;
    
    std::cout << *pSomeoneAge << std::endl;

    std::string FreePizza[5] ={"Pizza1", "pizza2", "Pizza3", "Pizza4", "Pizza5", };

    //! here we wont add & cos FreePizza is already an address
    std::string *pCarryPizzas = FreePizza;
    std::cout << *pCarryPizzas << std::endl; 

    //and to get all of them, use a for loop
    // you should use the  ->  operator because  pCarryPizzas  is a pointer. The  ->  operator is used 
    // to access a member of the object pointed to by a pointer. 
    for(int i = 0; i < pCarryPizzas->size(); i++){
        std::cout << *pCarryPizzas << std::endl;
        pCarryPizzas++;
    }
    //or 
    //? for (int i = 0; i < 5; i++) {
    //?     std::cout << *(pCarryPizzas + i) << std::endl;
    //? }
    
    return 0;
}
