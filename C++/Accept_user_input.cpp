//taking user input 
// cout << (insertion operator)
// cin >> (extraction operator)
//!make sure that "run in terminal is checked" in settings of code runner

#include <iostream>
#include <vector>

int main() {
    std::string name;
    int age;

    //! remember the order , first name comes and once it receives , THEN age will come
 std::cout << "Enter your name: "<<'\n'; //this is to accept usr input
    //?std::cin >> name; //this is to accept the user input
    //now the terminal wont read the name with gaps like the full name , but to get that 
    //we use getline()
    //?std::getline(std::cin, name); 
    //now the full name will appear
    //*but now what if age was written above name, the ouput will be hell 21 years old or something 
    //to remove that white space , we will add //*>>std::ws
    std::getline(std::cin >>std::ws, name);

    std::cout<< "Enter your age: "<<'\n';
    std::cin >> age;

    std::cout << "Hello, " << name << " and your are "<< age <<" years old"<<"!\n"; 
    //this is to print the user input
    
    
    return 0;
}