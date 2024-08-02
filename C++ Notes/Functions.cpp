
#include <iostream>

//? this is a function , represents as void in this 
//? void abc(){
//?     std::cout<<"happy birthday\n";
//?     std::cout<<"happy birthday\n";
//?     std::cout<<"happy birthday to you \n";
//?     std::cout<<"happy birthday to you!!!!\n";
//? }

//if you wanna define it later then just do this
void abc(std::string name , int age); //!make sure to add the name and type here too
//just call it first here so the main function can see it

int main() { 
    std::string name = "bro";
    int age = 21;
    abc(name, age); //!make sure that the function is aware of the name and age
    // and we invoke it by calling its name

    return 0;
}
//!and add the name and type here too
void abc(std::string name, int age) { 
    std::cout<<"happy birthday\n";
    std::cout<<"happy birthday\n";
    std::cout<<"happy birthday to you dear "<< name <<"\n";
    std::cout<<"congrats you are "<<age<<" years old this year\n"; 
}