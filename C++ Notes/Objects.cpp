#include <iostream>
#include <string>
#include <ctime>
#include <vector>

// object = a collection of attributes and methods 
// they can have characteristics and could perform actions 
// can be used to mimic real world items (ex. Phone , Book, ect)
// created from a class which acts as a "blue-print"

class Human{
    public: // public access modifier 
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << name << " is eating" << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking" << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping" << std::endl;
        }
};
int main(){
    Human abc;
    abc.name = "Rick";
    abc.occupation = "Programmer";
    abc.age = 25;

    std::cout << abc.name << std::endl;
    std::cout << abc.occupation << std::endl;
    std::cout << abc.age << std::endl;

    abc.eat(); //Rick is eating
    abc.drink(); //Rick is drinking
    abc.sleep(); //Rick is sleeping

    
    return  0;
}