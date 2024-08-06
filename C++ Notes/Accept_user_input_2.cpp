#include <iostream>
#include <string>

int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(std::string);
    std::string temp;
    for(int i = 0 ; i < size; i ++){
        std::cout << "enter a food you like or q to quit #"<< i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }
    std::cout<<"you like the following food\n";

    //this will remove any blank array values
    for(int i = 0 ; !foods[i].empty(); i++){
        std::cout<<foods[i]<<"\n";
    }
    return 0;
}