#include <iostream>
#include "faker-cxx/faker-cxx/location.h"

int main() {
    // Call the random_address function and print the result
    std::string address = faker::location::random_address();
    
    std::cout << "Random Address: " << std::endl;
    std::cout << address << std::endl;
    
    return 0;
}
