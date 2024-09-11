#include <iostream>
#include <string>
#include <ctime>
#include <vector>

// recursion = a programming technique where a function invokes itself from within
// break a complex concept into a repeatable single step

//! (iterative vs recursion)

// advantages = less code and is cleaner 
//              useful for sorting and searching algorithms

//disadvantages = uses more memory and is slower

int factorial(int num);
int recursion(int num);
int main(){
    
   std::cout<< factorial(10)<<std::endl;
   std::cout<< recursion(10);
   

    return 0;
}
int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
int recursion(int num){
    if(num > 1){
        return num * recursion(num - 1);
    }
    return 1;
    //or
    //? if(num == 1){
    //?     return 1;
    //? }
    //? return num * recursion(num - 1);
}
