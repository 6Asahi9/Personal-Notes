#include <iostream>
int main(){
    int x; //declare variables
    x = 5; //assign variable

    std::cout << "x = " << x << std::endl; //it will show " x = 5"

    int y = 6; // remember this int cant store decimal points like if we assign this 6.7 , this will show as 6
    int sum = x + y; //pay attention to spacing in this
    std::cout << "sum = " << sum << std::endl; //it will show "sum = 11"

    //?double (includes numbers with decimal point)
    double price = 10.99;
    std::cout << "price = " << price << std::endl; //it will show "price = 10.99"

    //! char (ONLY single character) remember this need ' '
    char grade ='A';
    std::cout << "grade = " << grade << std::endl; //it will show "grade = A"

    //? boolean ( true or false )
    bool student = false;
    bool power = true;

    //? string (object that represents a sequence of text) remember this need " "
    std::string name = "<NAME>";
    std::cout << name << std::endl; //it will show "<NAME>"
    
    std::string age = "27"; //can write numbers here too
    std ::cout << "you are " << age << " years old" <<'\n'; //output will be "you are 27 years old"

    //! USE UPPERCASE WITH CONST
    const double PI = 3.14;
    double radius = 10;
    const double CIRCUMFERENCE = 2 * PI * radius;

    std::cout << CIRCUMFERENCE << " cm" <<std::endl;

    

    return 0;
}