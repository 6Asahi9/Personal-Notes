#include <iostream>

//sizeof() = determines the size in bytes of a: 
//           variable, data type, class, object, ect. 
int main(){

    std::string name ="bro";
    std::cout<<sizeof(name)<< " bytes\n"; //32 bytes , its long cos this holds a address where the name is located

    double gpa = 5.5;
    //! instead of the name , you can use the type here too
    std::cout<<sizeof(double)<<" bytes\n"; // 8 bytes

    char grade = 'A';
    std::cout<<sizeof(grade)<< " bytes\n"; // 1 byte

    bool student = false;
    std::cout<<sizeof(student)<< " bytes\n"; // 1 byte

    char marks[] ={'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout<<sizeof(marks)<< " bytes\n"; // 6 bytes
    std::cout<<sizeof(marks)/sizeof(marks[2])<<" elements \n"; // 6 bytes

    std::string characters[] ={"charlie","lauren","sasha"};
    std::cout<<sizeof(characters)/sizeof(std::string)<<" characters\n";
    //! you can make it focus on one array too


    
    return 0;
}