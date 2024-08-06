#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Your choice is: " ;
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<" and Computer choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout<<"Rock";
            break;
        case 'p':
            std::cout<<"Paper";
            break;
        case 's':
            std::cout<<"Scissors";
            break;
        default:
            std::cout<<"Error";
            break;
    }

}
char getUserChoice(){
    char player;
    std::cout<<"Rock - Paper - Scissors -Game\n";

    do{
    std::cout<<"'r' for rock\n";
    std::cout<<"'p' for paper\n";
    std::cout<<"'s' for scissors\n";
    std::cin>>player;
    if(player!= 'r' && player!= 'p' && player!= 's')
        {
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }while(player!= 'r' && player!= 'p' && player!='s');
    

    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = (rand() % 3) +1;

    switch(num){
        case 1: //! no need to add break cos we are already using return;
            return 'r';
        case 2:
            return 'p';
        case 3:
            return's';
        default:
            return 'r';
    }
    return 0;
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){std::cout<<" , its a tie"; }
                    else if(computer == 'p'){std::cout<<" , You lose"; }
                    else if(computer =='s'){std::cout<<" , You win"; } break;
        case 'p': if(computer == 'r'){std::cout<<" , You win"; }
                    else if(computer == 'p'){std::cout<<" , its a tie"; }
                    else if(computer =='s'){std::cout<<" , You lose";} break;
        case 's': if(computer == 'r'){std::cout<<" , You lose"; }
                    else if(computer == 'p'){std::cout<<" , You win"; }
                    else if(computer =='s'){std::cout<<" , its a tie"; } break;
        default:
        std::cout<<"Error"; break;
    }
}