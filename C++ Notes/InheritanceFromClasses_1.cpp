#include <iostream>
#include <string>
class Shape{ 
    public:
    double area;
    double volume;
};
class cube : public Shape{
    public:
    double side;
    cube(double x){
        this->side = x;
        this->area = x * x * 6;
        this->volume = x * x * x;
    }
};
class Sphere : public Shape{
    public:
    double radius;
    Sphere(double x){
        this->radius = x;
        this->area = 4 * 3.14 * (x * x);
        this->volume = (4/3.0) * 3.14 * (x * x * x);
    }
};
int main(){
    cube abc(10);
    std::cout <<"Area "<<abc.area<<"cm^2"<<std::endl;
    std::cout <<"Volume "<<abc.volume<<"cm^3"<<std::endl;

    Sphere xyz(5);
    std::cout <<"Area "<<xyz.area<<"cm^2"<<std::endl;
    std::cout <<"Volume "<<xyz.volume<<"cm^3"<<std::endl;
    
    return 0;
}