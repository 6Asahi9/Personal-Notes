//typedef = reserved keyword used to create an additional name 
//(alias) for another data type.
///new identifier for existing type
//helps with readability and reduces typos
//it got replaced with 'using' keyword (works better w/ templates)
#include <iostream>
#include <vector> //you need to include the header file for the data type you want to create a typedef for. 
//In this case, you are creating a new name for the std::vector data type, so you need to include the <vector> header file

//?typedef std::string abc_t; //remember to include _t at the end 
//?typedef int number_t;

//and it got replaced with 'using'
using abc_t = std::string;
using number_t = int;
int main(){
   
    abc_t name ="bro";
    std::cout<<"everyone calls him "<<name<<'\n';

    number_t age = 21;
    std::cout<<"and his age is "<<age<<'\n';

    return 0;
}

