
#include <iostream>
#include <cmath> 


int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin ,name);

    //? name.length()
    // if(name.length() > 12){
    //     std::cout<<"your name cant be longer than 12 words\n";
    // }
    // else{
    //     std::cout<<"welcome "<<name<<'\n';
    // }

    //? name.empty()
    // if(name.empty()){
    //     std::cout<<"your name cant be empty\n";
    // }
    // else{
    //     std::cout<<"welcome "<<name<<'\n';
    // }

    //? name.clear()
    // name.clear();
    // std::cout<<"welcome "<<name<<'\n';

    //?name.append("@gmail.com");
    // name.append("@gmail.com");
    // std::cout<<"your username is now  "<<name<<'\n';

    //? name.at(0); this will show the first index character of the name 
    // std::cout<<name.at(0)<<'\n'; // output of bro will be B

    //? name.insert(index, "thing we like to include"); 
    // name.insert(0 , "@");
    // std::cout<<name<<'\n';

    //? name.find(); ,now what if we wanna find any spaces in our name
    //std::cout<<name.find(' ')<<'\n'; //this will give the index where the space is

    //? name.erase(first index, second index); , itb will erase the characters between index 0, 1, 2, 3, NOT 4 
    //std::cout<<name.erase(0, 3);

    //! for more go to https://www.cplusplus.com/reference/string/string

    return 0;
}