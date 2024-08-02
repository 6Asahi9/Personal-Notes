
#include <iostream>
//!! include this to work with random numbers
#include <ctime> 
//! these are pseudo-random numbers = NOT truly random (but close)


int main() { 
        //random number generator = srand()
        //within this function we need a seed = time(NULL)
        //but if you wanna pass a specific data then do this 
        //? int seed = 43;
        //? srand(seed);

        srand(time(NULL));
        //this is to invoke it 
        int abc = (rand() % 20) + 1; 
        //this 6 is here to put a limit so it will only generate up to 20 and +1 makes sure there is no 0
        std::cout << abc;

    return 0;
}