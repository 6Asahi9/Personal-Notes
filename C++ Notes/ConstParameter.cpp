#include <iostream>
#include <string>

//const parameter = paramater that is effectively read only code is more secure and conveys intent 
//useful for reference and pointers 

//? now it will only read the original parameter
void print(const std::string &name, const int &age){
    std::cout << name << " is " << age << " years old"<< std::endl;
}

int main(){
    
    std::string name = "bro";
    int age = 12;

    print(name, age);
    
    
    return 0;
}