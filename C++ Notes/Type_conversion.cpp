//type conversion = conversion a value of one data type to another
//                  implicit = automatic conversion
//                  explicit = precede value with new data type (int)

#include <iostream>
#include <vector>

int main() {

    double x = (int) 3.14; //here we have converted it into a int 
    std::cout << x <<'\n'; //output will be 3
    //or we can do this 
    std::cout <<(char) 100<<'\n'; //*it will show "d" cos of ASCII table

    int correctAnswer = 8;
    int questions = 10;
    int result = (double) correctAnswer/questions *100; //and here we can convert int to double 
    std::cout << result <<"%"<<'\n';
    
    return 0;
}
