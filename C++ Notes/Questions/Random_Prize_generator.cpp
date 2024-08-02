
#include <iostream>
//!! include this to work with random numbers
#include <ctime> 
//! these are pseudo-random numbers = NOT truly random (but close)


int main() { 
    srand(time(0));
    int ranNUM = (rand() % 5) +1;
    
    switch(ranNUM){ //if you want someone to get 2 prizes , just remove break at the end of each line
        using namespace std;
        case 1:
            cout << "You won a bumper sticker" << endl;
            break;
        case 2:
            cout << "You won a full size suit" << endl;
            break;
        case 3:
            cout << "You won a free food for a year" << endl;
            break;
        case 4:
            cout << "You won $50 gift cards" << endl;
            break;
        case 5:
            cout << "You won a concert ticket" << endl;
            break;
        default:
            cout << "You rolled an invalid number" << endl;
            break;
    }


    return 0;
}