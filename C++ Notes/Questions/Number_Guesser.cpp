
#include <iostream>
//!! include this to work with random numbers
#include <ctime> 
//! these are pseudo-random numbers = NOT truly random (but close)


int main() { 
    int num;
    int guess;
    int tries = 0; //! make sure to set it to 0

    srand(time(NULL));
    num = (rand() % 100 )+ 1;

    std::cout << "************** NUMBER GUESSER ************** \n";

    do{
        std::cout << "Enter a number between 1 and 100: ";

        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else if(guess == num){
            std::cout << "You got it! in only "<<tries << " tries\n";
            break;
        }
    }
    while(guess != num);


    return 0;
}