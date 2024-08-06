#include <iostream>

double getTotal(double price[], int size);
int main(){
    double prices[] ={34.25, 50.00, 20.75, 30.44};
    int size = sizeof(prices)/sizeof(prices[0]);
    //! while passing the name of array in the function , you dont need to add []
    //? now we will pass on the size to the pointer
    double total = getTotal(prices, size);
    std::cout<<"$"<<total<<'\n';
    return 0;

}
//need to accept the array of double
double getTotal(double price[], int size){
    double total = 0;
    // ! MAKE SURE TO NOT ADD i<= size, DONT ADD = 
    for(int i = 0; i< size; i++){
        total = total + price[i];
    } 
    return total;

}
