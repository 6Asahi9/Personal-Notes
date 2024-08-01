
#include <iostream>
#include <cmath> 
#include <vector>


int main() {
    //while loop
    //? std::string name;
    //? while(name.empty()){
    //?     std::cout<<"enter your name\n";
           //!remember to put getline here , otherwise , function will ignore the blank line
    //?     std::getline(std::cin,name);
    //? }
    //? std::cout<<"Hello "<<name<<"\n";

    //do-while loop
    double number;
    //run this once and then..
    //? do{ 
    //?     std::cout<<"please write a positive number\n";
    //?    std::cin>>number;
    //? } 
    // .. check the condition , and repeat if condition under is true
    //? while(number < 0); 
    //make sure to add ;
    //? std::cout<<"the number is "<<number<<"\n";

    //for loop
    // can add i+=2 , so number will go up by 2 every time
    for(int i=0; i <= 3; i++){
        std::cout<<i<<"\n";
    }
    std::cout<<"happy new year"<<'\n';

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (const auto& number : numbers) {
        std::cout << number << "\n";
    }

    return 0;
}