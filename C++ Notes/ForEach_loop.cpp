#include <iostream>

// foreach loop = loop that eases the traversal over an iterate data set 
// example of iterate data set is an array 
int main(){
    
    std::string students[] = {"patrick", "sandy", "spongeBob", "squidWard" };
    //? }for (data_type variable : array_name) {
    //? loop body
    //? }
    for(std::string students : students){
        std::cout<<students<<'\n';}

    int grades[] = {45, 66, 69, 98, 32};
    for(int abc : grades){
        std::cout<<abc<<'\n';}    //! it will work if you change the name of the loop body and variable are same 
    return 0;
}
