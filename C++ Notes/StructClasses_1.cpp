#include <iostream>
#include <string>
#include <ctime>
#include <vector>

struct car{
    std::string model;
    int year;
    std::string color;
};
//! DONT use auto here cos nothing is returning 
void printCar(car hjk);
void paintCar(car &yui, std::string color);
int main(){
    car abc;
    car xyz;

    abc.model = "BMW";
    abc.year = 2020;
    abc.color = "red";

    xyz.model = "Audi";
    xyz.year = 2019;
    xyz.color = "blue";

        
    paintCar(abc, "silver");
    paintCar(xyz, "black");

    printCar(abc);
    printCar(xyz);



    return 0;
}
//* always put the struct name and then a reference name next to it
void printCar(car hjk){
    std::cout << hjk.model << std::endl;
    std::cout << hjk.year << std::endl;
    std::cout << hjk.color << std::endl;
}
//change the color in the original with &
void paintCar(car &yui, std::string color){
    yui.color = color;
}