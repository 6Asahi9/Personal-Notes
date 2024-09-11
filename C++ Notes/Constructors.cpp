#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <memory>

// Constructor = a special method that is automatically called when an object is instantiated
//              useful for assigning values to attributes as arguments 

class Student{
    public:
    std::string name;
    int age;
    double gpa;

//! the constructor must have the same name as the class
    Student(std::string x , int y, double z){
        this->name = x; //* this->name is from above and = name is from the parameter
        this->age = y;
        this->gpa = z;
        //or
    //? Student(std::string name, int age, double gpa)
    //? : name(name), age(age), gpa(gpa) {}
    }
};

class car{
    public:
    std::string name;
    int price;
    int year;

    car(std::string x, int y, int z){
        this->name = x;
        this->price = y;
        this->year = z;
    }
};

int main(){
    Student abc("Eric", 25, 3.2 );
    
    // if the class is in private 
    //? Student* student = new Student("Eric", 25, 3.2);

    std::cout<<abc.name<<std::endl;
    std::cout<<abc.age<<std::endl;
    std::cout<<abc.gpa<<std::endl;

    //use multiple 
    Student xyz("Mark", 65, 9.6 );
    std::cout<<xyz.name<<std::endl;
    std::cout<<xyz.age<<std::endl;
    std::cout<<xyz.gpa<<std::endl;
    
    //----------------------------------------------------------------
    //! DONT name this "abc or xyz" because they should not have the same variable name  
    car yui("Toyota", 45000, 2001 );
    std::cout<<yui.name<<std::endl;
    std::cout<<yui.price<<std::endl;
    std::cout<<yui.year<<std::endl;
    
    
    return 0;
}