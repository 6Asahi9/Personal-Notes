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

    // forEach
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
// this is where you write the function name and type outside the main function and send values 
// to it from inside the main function

// ----------------------------------------------------------------

// ! Return Keyword
// * this is in the Return_Keyword.cpp file

// ----------------------------------------------------------------

// ! Array
std::string car[] = {"corvette", "mustang", "camry"};

// ----------------------------------------------------------------

// ! SizeOf()
char marks[] ={'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout<<sizeof(marks)<< " bytes\n"; // 6 bytes
    std::cout<<sizeof(marks)/sizeof(marks[2])<<" elements \n"; // 6 bytes


char grades[] ={'A', 'B', 'C', 'D', 'E', 'F', };
    //! make sure to add int in front of i
    for(int i = 0; i <= sizeof(grades)/sizeof(char); i++){
        std::cout<<grades[i];
        std::cout<<'\n';
    }

// ----------------------------------------------------------------

// ! Pass array to function
// * this is in the file called Pass_array_to_function.cpp

// ----------------------------------------------------------------

// ! search through array
// * this is in the file called search_through_array.cpp

// ----------------------------------------------------------------

// ! Fill function
const int SIZE = 99; // Define the size of the array
    std::string foods[SIZE]; // Declare the array

    // Fill the first third of the array with "pizza"
    fill(foods, foods + (SIZE/3), "pizza");

    // Fill the second third of the array with "hamburger"
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");

    // Fill the last third of the array with "hotdogs"
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    // Print the elements of the array
    for(std::string food : foods) {
        std::cout << food << std::endl;
    }

// ----------------------------------------------------------------

// ! Swap Values with &
// int swap(int &a, int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return (a, b);
    
// }
// int main(){
//     int x = 1;
//     int y = 2;
    
//     swap(x,y);
//     std::cout << x << std::endl;
//     std::cout << y << std::endl;
    
    
//     return 0;
// }

// ----------------------------------------------------------------

// ! 2D Arrays
// these two [] represents rows and columns, kinda works like grid lines
    std::string cars[][4]= { /* column 1  column 2  column 3 */
                /*row 1*/    {"mustang", "escape", "F-150"},
                /*row 2*/    {"corvette", "equinox", "silverAdo"},
                /*row 3*/    {"challenger", "durango", "ram-1500"}
        };
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std::cout << cars[i][j] << " "; //we cant add \n here cos then every element will be displayed individually
        }
        std::cout << std::endl; //this will make sure that the specific columns are together 
    }

// ----------------------------------------------------------------

// ! Null pointers 
int *pointer = nullptr; //its a good practice to assign null pointers
    int x = 123;
    pointer = &x;
    
    if(pointer == nullptr){
        std::cout << "Pointer is null" <<std::endl;
    }
    else{
        std::cout << "Pointer is not null "<< *pointer << std::endl;
    }
    
    //! when using pointer , be careful that your code isn't 
    //! dereferencing nullptr or pointing to a free memory
    //! this will cause undefined behaviour 
    
// ----------------------------------------------------------------

// ! Pointer 
int age = 12;
    int *pSomeoneAge = &age;
    
    std::cout << *pSomeoneAge << std::endl;

    std::string FreePizza[5] ={"Pizza1", "pizza2", "Pizza3", "Pizza4", "Pizza5", };

    //! here we wont add & cos FreePizza is already an address
    std::string *pCarryPizzas = FreePizza;
    std::cout << *pCarryPizzas << std::endl; 

    //and to get all of them, use a for loop
    // you should use the  ->  operator because  pCarryPizzas  is a pointer. The  ->  operator is used 
    // to access a member of the object pointed to by a pointer. 
    for(int i = 0; i < pCarryPizzas->size(); i++){
        std::cout << *pCarryPizzas << std::endl;
        pCarryPizzas++;
    }
    //or 
    //? for (int i = 0; i < 5; i++) {
    //?     std::cout << *(pCarryPizzas + i) << std::endl;
    //? }

// ----------------------------------------------------------------

// ! Dynamic Memory 
//? delete pNum; 
    //! always use this after dynamic memory to not cause memory leak
    //----------------------------------------------------------------

    char *pGrades = NULL;
    int size;

    std::cout<<" How many Grades to enter in? : \n";
    std::cin>>size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        // i + 1 cos i is zero to begin with
        std::cout<<"Enter garde #"<<i + 1<<": ";
        std::cin>>pGrades[i]; // we can either add pGrades + 1 too;
    }
    for(int i=0; i < size; i++){
        std::cout<<pGrades[i]<<" ";
    }

    delete[] pGrades; 
    
// ----------------------------------------------------------------

// ! (iterative vs recursion)
    //? recursion is more efficient and uses less memory but can lead to stack overflow if not handled correctly
    //? iterative is more straightforward and uses more memory but can be easier to understand and debug

    //? iterative example
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += i;
    }
    // read it more from iterativeVsRecursion.cpp

// ----------------------------------------------------------------

// ! templates 
// read more from Templates.cpp file

// ----------------------------------------------------------------

// ! Struct classes 
// read more from Struct.cpp file

// ----------------------------------------------------------------

// ! Objects
// read more from Object.cpp file

// ----------------------------------------------------------------

// ! Enum 
// read more from Enum.cpp file

// ----------------------------------------------------------------

// ! Constructors and overload constructors
// read more from Constructors.cpp file

// ----------------------------------------------------------------

// ! Getter and setter
// read more from Getter_Setter.cpp file

// ----------------------------------------------------------------

// ! inheritance from classes
// read more from Inheritance.cpp file

// ----------------------------------------------------------------

// ! Append two classes 
std::vector<std::string> Cars = {"Honda", "Tesla", "Corvet"};
    Cars[0] = "Mustang";

    std::vector<std::string> Cars2 = {"Ford", "Chevrolet", "Toyota"};

    // Append Cars2 to Cars
    // 1. tell the vector from you want to copy 
    // 2. we want to copy from index 0 (start) 
    // 3, tell where we want to put the copied vector
    // 4, give the index value here too
    // 5. we want tp copy to full thing so write cars.size() (ending)
    Cars.insert(Cars.end(), Cars2.begin(), Cars2.end());

    // Print the elements of Cars
    for(int i = 0; i < Cars.size(); i++){
        std::cout << Cars[i] << std::endl;
    }

// ----------------------------------------------------------------
}