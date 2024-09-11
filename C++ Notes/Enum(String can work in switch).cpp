#include <iostream>
#include <string>
#include <ctime>
#include <vector>

//enums = a user-defined date type that consists of paired named-integers constants.
//        GREAT if you have a set of potential options

//! In C++, you can't use strings directly inside a switch statement. 
//! The switch statement in C++ works only with integral types (such as int, char, enum, etc.). 

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
int main(){
    Day today = sunday;

    switch (today) {
        //since we have assigned sunday = 0, we can just write case 0 here and so on..
        case sunday:
            std::cout << "It's Sunday!" << std::endl;
            break;
        case monday:
            std::cout << "It's Monday!" << std::endl;
            break;
        case tuesday:
            std::cout << "It's Tuesday!" << std::endl;
            break;
        case wednesday:
            std::cout << "It's Wednesday!" << std::endl;
            break;
        case thursday:
            std::cout << "It's Thursday!" << std::endl;
            break;
        case friday:
            std::cout << "It's Friday!" << std::endl;
            break;
        case saturday:
            std::cout << "It's Saturday!" << std::endl;
            break;
        default:
            std::cout << "Invalid day!" << std::endl;
            break;
    }

    return 0;
}