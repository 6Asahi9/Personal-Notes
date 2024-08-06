#include <iostream>
//fill() = fills a range of elements with a specified value 
//         fill(begin, end , value)
int main(){
    //lets say i wanna fill an array with word pizza and the array should have 20 elements
    // i dont wanna write it manually so i will use fill function

    // const int SIZE = 20;
    // std::string foods[SIZE]; //! make sure a value is inside of this too
    //{array name, array name + size, value inside}
    // //? fill(foods, foods + SIZE, "pizza");
     //now lets say i want the other half to be hamburger 
    // fill(foods, foods + (SIZE/2), "pizza"); //now the half of the array is empty
    // //! pay attention to the begin, end 
    // fill(foods + (SIZE/2), foods + SIZE, "hamburger");
    // for(std:: string foods : foods){
    //     std::cout << foods << std::endl;
    // }

    //now i want 1/3 or the array to be something else 
    const int SIZE = 99; // Define the size of the array
    std::string foods[SIZE]; // Declare the array

    // Fill the first third of the array with "pizza"
    fill(foods, foods + (SIZE/3), "pizza");

    // Fill the second third of the array with "hamburger"
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");

    // Fill the last third of the array with "hotdogs"
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    // Print the elements of the array
    for(std::string food : foods) {
        std::cout << food << std::endl;
    }
    return 0;
}