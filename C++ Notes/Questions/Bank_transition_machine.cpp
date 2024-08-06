#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choices = 0;

    do {
        std::cout << "*******************\n";
        std::cout << "Enter your choice : \n";
        std::cout << "*******************\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Show Balance\n";
        std::cout << "4. Exit\n";
        std::cout << "*******************\n";

        std::cin >> choices;

        std::cin.clear(); //this will reset any error flags when standard input fails to read it
        fflush(stdin); //this will clear out any input buffer
        //stdin means standard input

        switch(choices) {
            case 1: {
                double depositedAmount = deposit();
                balance = balance + depositedAmount;
                std::cout << "Thank you for depositing $" << std::fixed << std::setprecision(2) << depositedAmount << ". Your current balance is ";
                showBalance(balance);
                break;
            }
            case 2: 
                balance = balance - withdraw(balance);
                std::cout << "amount successfully withdrawn !!" << std::fixed << std::setprecision(2) << ". Your current balance is ";
                showBalance(balance);
                break;
            case 3:
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while(choices != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
}

double deposit() {
    double amount = 0;
    std::cout << "Enter the amount you want to deposit: $";
    std::cin >> std::setprecision(2) >> amount;
    if(std::cin.fail() || amount <= 0) {
        std::cin.clear();
        std::cout << "Invalid amount\n";
        return 0;
    }
    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter the amount you want to withdraw: $";
    std::cin >> std::setprecision(2) >> amount;
    if(std::cin.fail() || amount <= 0) {
        std::cin.clear();
        std::cout << "Invalid amount\n";
        return 0;
    }
    if(amount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    return amount;
}
