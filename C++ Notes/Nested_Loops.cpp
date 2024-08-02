
#include <iostream>
#include <cmath> 


int main() { 
    
    int rows;
    int columns;
    char symbol;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for(int i = 1; i<= rows; i++){
        for(int j = 1; j<= columns; j++){
            std::cout<<symbol<<" ";
        }
        std::cout<<'\n';
    }

    
    
    
    //this loop will count 1 - 10 three times
    //? for(int i = 1; i<=3; i++){
    //?    for(int j = 1; j <= 10; j++){
    //?         std::cout<< j << " "; 
    //this blank space will give space between numbers on the terminal
    //?     }
    //?     std::cout<<'\n'; 
    //with this the number from 1 - 10 will be shown in three different lines 
    //? }

    return 0;
}