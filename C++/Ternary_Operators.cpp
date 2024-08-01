
#include <iostream>
#include <cmath> 

int main() {
    //? double grade;
    //? std::cout << "Enter your grade: ";
    //? std::cin >> grade;
    //? grade >=60 ? std::cout << "YOU PASSED" : std::cout << "YOU FAILED";

    //? int number;
    //? std::cout<<"enter your number :";
    //? std::cin>>number;
    //? number % 2==0 ? std::cout<<"number is even" : std::cout<<"number is odd";

    bool hungry;
    std::cout << "Are you hungry ? true or false :";
    std::cin >>  std::boolalpha >> hungry; //!make sure to add  std::boolalpha 
    hungry == true ? std::cout<<"you said you are hungry" : std::cout<<"you said you are not hungry";
    return 0;
}