#include <iostream>
#include <string>

//Null value = a special value that means something has no value 
//             when a pointer is holding a null value
//             that pointer is not pointing at anything (null pointer)

//Nullptr = keyword represent a null pointer literal

//Nullptr are helpful when determining if an address was successfully assigned to a pointer

int main(){
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
    
    
    return 0;
}
