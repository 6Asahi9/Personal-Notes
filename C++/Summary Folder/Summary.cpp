#include <iostream>
#include <cmath> 
int main(){
// ! Basic
  std::cout << "i like pizza" << std::endl; 
  std::cout << "its really good" << '\n';
  return 0;

//----------------------------------------------------------------

// ! TypeDef
using abc_t = std::string;
using number_t = int;
abc_t name ="bro";
std::cout<<"everyone calls him "<<name<<'\n';

number_t age = 21;
std::cout<<"and his age is "<<age<<'\n';

//----------------------------------------------------------------

// ! Arithmetic Operators
{
  //*  remember this order :
  //  first parentheses
  //  second multiplications and division
  // third addition and subtraction
  }
  int houses = 10 + 6 - (5 + 4) * 3 / 2;
    std::cout << houses << std::endl; //this will show 3

//----------------------------------------------------------------

// ! NameSpace
  //*if you want to assign two variables of same name then use namespaces
  // lets say we have a 
  // namespace abc{
  //     int x = 1;
  // }
  //? int main(){
      
  //     int x = 0; //no matter what it will take the local values first unless we use "using namespace"
  //     std::cout<<x<<std::endl;     //output will be 0
  //     std::cout<<abc::x<<std::endl;//output will be 1
  //? }

//----------------------------------------------------------------

// ! Variable and const
int x = 1;
int y = 2;
int sum = x + y;
double price = 9.99;
char grade = 'A';
bool student = true;
std::string name = "bob";
const std::string name = "bob";
 
//----------------------------------------------------------------

// ! Type conversion
double x = (int) 3.14; //here we have converted it into a int 
    std::cout << x <<'\n'; //output will be 3
    //or we can do this 
    std::cout <<(char) 100<<'\n'; //*it will show "d" cos of ASCII table

    int correctAnswer = 8;
    int questions = 10;
    int result = (double) correctAnswer/questions *100; //and here we can convert int to double 
    std::cout << result <<"%"<<'\n';

//----------------------------------------------------------------

// ! Accept user info
std::cout << "Enter your name: "<<'\n';
std::getline(std::cin >>std::ws, name);

std::cout<< "Enter your age: "<<'\n';
    std::cin >> age;

    std::cout << "Hello, " << name << " and your are "<< age <<" years old"<<"!\n"; 

//----------------------------------------------------------------

// ! Math related functions 
// * make sure to include #include <cmath> 
    int x = 3;
    int y = 4;
    double z;
    z = std::max(x, y); //it will show 4 
    std::cout << z<<'\n';
    
    z = std::min(x, y); //it will show 3
    std::cout << z<<'\n';

    z = pow(2, 3); //this is power
    std::cout << z<<'\n'; //it will show 8

    z = sqrt(9); //this is square root
    std::cout << z<<'\n'; //it will show 3

    z = abs(-7); //this is absolute value, turn any number into positive value
    std::cout << z<<'\n'; //it will show 7

    double a = 5.6;
    z = round(a); // this will round off the value
    

}