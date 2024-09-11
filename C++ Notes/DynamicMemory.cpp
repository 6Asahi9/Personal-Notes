#include <iostream>
#include <string>
#include <ctime>

// Dynamic memory = memory that is allocated after the program is already compiled & running.
// its use the "new" operator to allocate memory in the heap rather than the stack

// useful when we dont know how much memory we will need. Makes our program more flexible,
// especially when accepting user input 
int main(){

    //? int *pNum = NULL; 
    //! it is recommended to use  nullptr  for better type safety. 

    //? pNum = new int;

    //now later we can store a value 
    //? *pNum = 10;
    //? std::cout << *pNum << std::endl; 
    //will give value 
    //? std::cout<< pNum <<'\n';
    //will give address 

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
    

    return 0;
}