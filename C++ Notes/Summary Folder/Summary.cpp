#include <iostream>
#include <vector>
#include <cmath> 


int main(){

// ! Basic
  std::cout << "i like pizza" << std::endl; 
  std::cout << "its really good" << '\n'; 
  return 0;

// ----------------------------------------------------------------

// ! Variable and Const 
    int x; //declare variables
    x = 5; //assign variable
    std::cout << "x = " << x << std::endl; //it will show " x = 5"
    int y = 6; 
    int sum = x + y; 
    double price = 10.99;
    char grade ='A';
    bool student = false;
    std::string name = "John";
    const std::string name = "Noah";

// ----------------------------------------------------------------

// ! NameSpace
    // namespace abc{
    //     int x = 1;
    // }
    //* int main(){
        
    //     int x = 0; //no matter what it will take the local values first unless we use "using namespace"
    //     std::cout<<x<<std::endl;     //output will be 0
    //     std::cout<<abc::x<<std::endl;//output will be 1
    //* }

// ----------------------------------------------------------------

// ! Arithmetic Operators
    { 
    //* remember this order :
    // first parentheses
    // second multiplications and division
    // third addition and subtraction
    }
    int houses = 10 + 6 - (5 + 4) * 3 / 2;
    std::cout << houses << std::endl; //this will show 3

// ----------------------------------------------------------------

// ! TypeDef
    using abc_t = std::string;
    using number_t = int;
    //* int main(){
    
        abc_t name ="bro";
        std::cout<<"everyone calls him "<<name<<'\n';

        number_t age = 21;
        std::cout<<"and his age is "<<age<<'\n';

    //* }

// ----------------------------------------------------------------

// ! Type conservation
    double x = (int) 3.14; //here we have converted it into a int 
    std::cout << x <<'\n'; //output will be 3
    //or we can do this 
    std::cout <<(char) 100<<'\n'; //*it will show "d" cos of ASCII table

// ----------------------------------------------------------------

// ! Math related functions 
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
    std::cout << z<<'\n'; //it will show 6
    
    //there are specific functions that will either round the value only UP or DOWN
    // for UP , its
    z = ceil(a);
    // for DOWN, its
    z = floor(a);

// ----------------------------------------------------------------

// ! Accept user info
    std::string name;
    int age;
    std::cout << "Enter your name: "<<'\n';
    std::cin >> name;

    //to remove that white space , we will add >>std::ws
    std::getline(std::cin >>std::ws, name);
    
    std::cout<< "Enter your age: "<<'\n';
    std::cin >> age;

    std::cout << "Hello, " << name << " and your are "<< age <<" years old"<<"!\n"; 

// ----------------------------------------------------------------

// ! if else statements
    int age;
    std::cout<<"enter your age: "<<'\n';
    std::cin>> age;
     
    if(age >= 18 && age <= 100){
        std::cout<<"you are eligible to vote"<<'\n';
    }
    else if(age >=100){
        std::cout<<"you are a bit too old"<<'\n';
    }
    else if(age <= 0){
        std::cout<<"age cannot be zero or less than zero"<<'\n';
    }
    else{
        std::cout<<"you are not eligible to vote"<<'\n';
    }

// ----------------------------------------------------------------

// ! Switches
    int month;
    std::cout<<"Enter the month number"<<'\n';
    std::cin>>month;

    switch(month){
        case 1:
            std::cout<<"January"<<'\n';
            break;
        case 2:
            std::cout<<"february"<<'\n';
            break;
        case 3:
            std::cout<<"march"<<'\n';
            break;
        default:
        std::cout<<"invalid month"<<'\n';
            break; }

// ----------------------------------------------------------------

// ! ternary operator
    int x = 10, y = 20;
    std::cout << (x > y? "x is greater than y" : "x is less than or equal to y") << std::endl;

// ----------------------------------------------------------------

// ! Logical Operators
//  && = checks if both the condition are true
//  || = checks if one of the condition is true
// /! = reverses the logical state of the its operand

// ----------------------------------------------------------------

// ! Loops
    // while
    std::string name;
    while(name.empty()){
         std::cout<<"enter your name\n";
         std::getline(std::cin,name);
     }
    std::cout<<"Hello "<<name<<"\n";
    
    // do while
    int number;
    do{ 
        std::cout<<"please write a positive number\n";
        std::cin>>number;
     } 
    // .. check the condition , and repeat if condition under is true
    while(number < 0); 
    //make sure to add ;
    std::cout<<"the number is "<<number<<"\n";

    // for
     for(int i=0; i <= 3; i++){
        std::cout<<i<<"\n";
    }
    std::cout<<"happy new year"<<'\n';

    // another for
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (const auto& number : numbers) {
        std::cout << number << "\n";
    }

// ----------------------------------------------------------------

// ! Syntaxes
name.length();
name.empty();
name.clear();
name.append("@gmail.com");
name.at(0);
name.find("example");
name.insert( 1 /*index*/, "thing we like to include");
name.erase(1 /*first index*/ ,2/*second index*/);

// ----------------------------------------------------------------

// ! Break and Continue
 int sum = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers, so they won't be added to the sum
        }
        sum += i;

        if (sum > 20) {
            break; // Stop the loop if the sum exceeds 20
        }
    }

    std::cout << "Sum: " << sum << std::endl;

// ----------------------------------------------------------------

// ! Nested loops
int rows = 0;
int columns = 0;
char symbol;

for(int i = 1; i<= rows; i++){
        for(int j = 1; j<= columns; j++){
            std::cout<<symbol<<" ";
        }
        std::cout<<'\n';
    }

// ----------------------------------------------------------------

// ! Random number 
        srand(time(NULL));
        //this is to invoke it 
        int abc = (rand() % 20) + 1; 
        //this 6 is here to put a limit so it will only generate up to 20 and +1 makes sure there is no 0
        std::cout << abc;

// ----------------------------------------------------------------

// ! Functions 
// * this is in the functions.cpp file

// ----------------------------------------------------------------

// !
}