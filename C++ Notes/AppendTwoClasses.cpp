#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> Cars = {"Honda", "Tesla", "Corvet"};
    Cars[0] = "Mustang";

    std::vector<std::string> Cars2 = {"Ford", "Chevrolet", "Toyota"};

    // Append Cars2 to Cars
    // 1. tell the vector from you want to copy 
    // 2. we want to copy from index 0 (start) 
    // 3, tell where we want to put the copied vector
    // 4, give the index value here too
    // 5. we want tp copy to full thing so write cars.size() (ending)
    Cars.insert(Cars.end(), Cars2.begin(), Cars2.end());

    // Print the elements of Cars
    for(int i = 0; i < Cars.size(); i++){
        std::cout << Cars[i] << std::endl;
    }

    return 0;
}