#include <iostream>
#include <string>

// inheritance = a class can receive attributes and methods from another class
//               children classes inherit from a parent class
//               helps to reuse similar code found within multiple classes 
class Animal{
    public:
    bool alive = true;
    void eat(){
        std::cout << "I am eating" << std::endl;
    }
};

//now to create a inheritance 
// class name : public and name of the parent class 
class Cat: public Animal{
    public:
    void meow(){
        std::cout << "I am meowing" << std::endl;
    }
};
class Dog: public Animal{};
int main(){
    Cat abc;
    std::cout<<abc.alive<<std::endl;
    abc.eat();
    abc.meow();


    Dog def;
    std::cout<<def.alive<<std::endl;
    def.eat();
    return 0;
}