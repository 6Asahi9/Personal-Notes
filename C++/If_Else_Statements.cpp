
#include <iostream>
#include <cmath> //? rest of the funtions are in this //no need in this code

int main() {
    int age;
    std::cout<<"enter your age: "<<'\n';
    std::cin>> age;
     
    if(age >= 18 && age <= 100){
        std::cout<<"you are eligible to vote"<<'\n';
    }
    else if(age >=100){
        std::cout<<"you are a bit too old"<<'\n';
    }
    else if(age <= 0){
        std::cout<<"age cannot be zero or less than zero"<<'\n';
    }
    else{
        std::cout<<"you are not eligible to vote"<<'\n';
    }

    return 0;
}