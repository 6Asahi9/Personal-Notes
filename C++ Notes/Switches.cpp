
#include <iostream>
#include <cmath> 

int main() {
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
        case 4:
            std::cout<<"april"<<'\n';
            break;
        case 5:
            std::cout<<"may"<<'\n';
            break;
        case 6:
            std::cout<<"june"<<'\n';
            break;
        case 7:
            std::cout<<"july"<<'\n';
            break;
        case 8:
            std::cout<<"august"<<'\n';
            break;
        case 9:
            std::cout<<"september"<<'\n';
            break;
        case 10:
            std::cout<<"october"<<'\n';
            break;
        case 11:
            std::cout<<"november"<<'\n';
            break;
        case 12:
            std::cout<<"december"<<'\n';
            break;

        default:
            std::cout<<"invalid month"<<'\n';
            break;   
    }

    return 0;
}