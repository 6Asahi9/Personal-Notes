#include <iostream>
#include <string>
#include <ctime>
#include <vector>

//function template = describes what a function looks like.
//                    can be used to generate as many overload function
//                    as needed , each using different data types

template <typename T> //! make sure to add this so the computer knows what template is 

//? use  T to use as template
T max(T x , T y){
    return (x>y) ? x : y;
}

//! now what if the data types of different types
template <typename W, typename X> 
auto abc(W x , X y){
    return (x>y) ? x : y;
}
int main(){
    
    std::cout <<max('2', '3')<<std::endl; 
    // you can write all any variable like int , double , char and whatever and it will understand it

    std::cout <<abc(2, 4.7); 


    
    return 0;
}