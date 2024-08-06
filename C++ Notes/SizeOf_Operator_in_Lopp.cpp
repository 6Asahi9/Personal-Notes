#include <iostream>

int main(){

    std::string students[] = {"patrick", "sandy", "spongeBob", "squidWard" };

    //? std::cout<<students[0]<<'\n';
    //? std::cout<<students[1]<<'\n';
    //? std::cout<<students[2]<<'\n';
   
    //the better way to represent this is to use for loop
    //? for(int i = 0; i<= 2; i++){
    //?     std::cout<<students[i];
    //?     std::cout<<'\n'; //! make sure to add this line
    //? }

    //this was good but what if we add another name in the array, to not waste time in changing code , we can use sizeof();
    for(int i = 0; i< sizeof(students)/sizeof(std::string); i++){
        std::cout<<students[i];
        std::cout<<'\n';
    }   

    char grades[] ={'A', 'B', 'C', 'D', 'E', 'F', };
    //! make sure to add int in front of i
    for(int i = 0; i <= sizeof(grades)/sizeof(char); i++){
        std::cout<<grades[i];
        std::cout<<'\n';
    }

    
    return 0;
}