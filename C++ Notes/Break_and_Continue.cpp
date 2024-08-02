
#include <iostream>
#include <cmath> 
//break = break out of the loop
//continue = skip the current iteration

int main() {
    
     int sum = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers, so they won't be added to the sum
        }
        sum += i;

        if (sum > 20) {
            break; // Stop the loop if the sum exceeds 20
        }
    }

    std::cout << "Sum: " << sum << std::endl;


    return 0;
}