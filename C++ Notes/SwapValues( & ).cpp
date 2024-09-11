#include <iostream>
#include <string>

//! use "&" to not taking just the reference but actual address
int swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return (a, b);
    
}
int main(){
    int x = 1;
    int y = 2;
    
    swap(x,y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    
    return 0;
}