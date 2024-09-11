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

void walk(int steps);
void walking(int steps);
int main(){
    
    walk(5); 
    walking(5);

    return 0;
}
void walk(int steps){
    for(int i=0; i<steps; i++){
        std::cout << "You take a steps!\n";
    }
    //! this is a iterative approach
}
void walking(int steps){
    if(steps > 0){
        std::cout << "You are walking!\n";
        //*here we invoked it inside itself 
        walking(steps-1); //! if we remove if statement and -1 , it will go infinitely (stack overflow)
        //If the number of steps is greater than zero, the function will print "You are walking!" 
        //and then recursively call itself, decreasing the number of steps by one. This process will continue until
        // the number of steps is zero, at which point the function will stop and return.
    }
    //! this is a recursion approach 
}