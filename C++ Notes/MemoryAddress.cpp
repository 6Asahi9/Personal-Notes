#include <iostream>
#include <string>

//memory addresses = location in memory where data is stored 
//a memory address can accessed with "&" (address of operator)
int main(){
    int age = 12;
    std::cout<<&age; //0x81b07ff8ec
    std::cout<<age; // 12
    
    return 0;
}