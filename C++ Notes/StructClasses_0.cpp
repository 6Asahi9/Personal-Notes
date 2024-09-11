#include <iostream>
#include <string>
#include <ctime>
#include <vector>

//struct = a structure that group related variables under one name 
//         struct can contain many different data types (string , int, double, bool ,ect)
//         variables in a struct are known as "members"
//         members can be access with, "Class Member Access Operator"


//! dont use name space with struct
struct Student{
    std::string name;
    bool enrolled;
    // you can default value too like bool enrolled = true 
    double gpa; 
};
int main(){

    Student abc;
    //? members are assign with a dot 
    abc.name = "<NAME>";
    abc.enrolled = true;
    abc.gpa = 3.5;

    //! remember to add abc , not the class name 
    std::cout<< abc.name<<std::endl;
    std::cout<< abc.enrolled<<std::endl;
    std::cout<< abc.gpa<<std::endl;

    return 0;
}