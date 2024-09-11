#include <iostream>
#include <string>

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE

class Stove {
    private:
        int temperature = 0;

    public:
    //we can use constructor too
    Stove(int temp) {
        temperature = temp;
    }
    int getTemperature() {  //now with getter , its readable 
        return temperature; }
    
    void setTemperature(int temp) {  //now with setter , its writeable 
    //? now we dont want any stupid temp to get passed in yeh? lets set a limit
        if(temp < 0){
            this->temperature = 0;
        }
        else if(temp >= 10){
            this->temperature = 10;
        }
        else{

            this->temperature = temp; }
        }   
};

int main(){
    Stove abc(8); //output 8 , from constructor 
    std::cout<<abc.getTemperature()<<std::endl; //output 0 , from getter

    abc.setTemperature(100); //from setter but since we have a limit ,
    std::cout<<abc.getTemperature()<<std::endl; //output 10 , from setter

    return 0;
}
