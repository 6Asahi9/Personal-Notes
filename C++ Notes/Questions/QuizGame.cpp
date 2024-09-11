#include <iostream>
#include <string>

int main(){
    std::string questions[] ={ "1. what year was c++ created?",
                               "2. who invented C++?",
                               "3. what is the predecessor of C++?",
                               "4. is earth flat"};
    std::string options[][4] = {
                                {"A. 1969", "B. 1975", "C. 1980", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John CarMack", "D. Mark Linton"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What is Earth"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions)/sizeof(std::string);
    char guess;
    int Score;

    for(int i=0; i<size; i++){
        std::cout<<"--------------------------------------------------\n";
        std::cout << questions[i]<<" \n";
        std::cout<<"--------------------------------------------------\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }
        std::cin>>guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "correct answer" << std::endl;
            Score++;
        }
        else{
            std::cout << "wrong answer" << std::endl;
            std::cout << "correct answer was : "<<answerKey[i] << std::endl;
        }

    }

    std::cout<<"--------------------------------------------------\n";
    std::cout << "Correct guesses : " << Score << std::endl;
    std::cout<<"--------------------------------------------------\n";
    std::cout<< "no. of questions were : "<<size<<std::endl;
    std::cout<<"--------------------------------------------------\n";
    std::cout<< "Score was : " << (Score/(double)size)*100 <<"%"<< std::endl;
    std::cout<<"--------------------------------------------------\n";
    

    return 0;
}