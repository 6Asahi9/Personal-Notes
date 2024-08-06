#include <iostream>
int main(){

    //? they can only take the types of values same as them like integers and strings wont be in one array
    std::string car[] = {"corvette", "mustang", "camry"};
    //?std::cout<<car<<'\n'; this will give a memory address
    //now even tho we have a car[0] on 0 index , if we assign something specifically to 0 index
    car[0] = "ferrari";
    //? it wont output the original which was at 0 index , but instead will give the specified we provided
    std::cout << car[0] << std::endl; // this wont give corvette as output
    std::cout << car[1] << std::endl;
    std::cout << car[2] << std::endl;


    //? while making an empty array , we have to put the total no. of things which will go in side of it
    std::string person[3]; //! make sure to set the size

    person[0] = "charles";
    person[1] = "james";
    person[2] = "michael";

    std::cout << person[0]<<'\n';
    std::cout << person[1]<<'\n';
    std::cout << person[2]<<'\n';

//----------------------------------------------------------------
    double prices[] = {5.25, 7.50, 2.0};
    std::cout << prices[0]<<'\n';
    std::cout << prices[1]<<'\n';
    std::cout << prices[2]<<'\n';
    

    return 0;
}