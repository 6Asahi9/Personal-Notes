#include <iostream>
#include <string>

int main(){
    // these two [] represents rows and columns, kinda works like grid lines
    std::string cars[][4]= { /* column 1  column 2  column 3 */
                /*row 1*/    {"mustang", "escape", "F-150"},
                /*row 2*/    {"corvette", "equinox", "silverAdo"},
                /*row 3*/    {"challenger", "durango", "ram-1500"}
        };
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << cars[i][j] << " "; //we cant add \n here cos then every element will be displayed individually
        }
        std::cout << std::endl; //this will make sure that the specific columns are together 
    }
    return 0;
}