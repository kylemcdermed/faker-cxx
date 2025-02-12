#include "faker-cxx/faker-cxx/location.h"

namespace faker::location {

    // Addresses for London and Belgium
    std::vector<std::string> london_address = {
        "Conway House, Annan Road\nColchester\nEngland\nCO4 3ZE\nUnited Kingdom"
    };
    
    std::vector<std::string> belgium_address = {
        "Diestsestraat 152\n3000 Leuven Belgium",
        "Blijde Inkomststraat 99\n3000 Leuven Belgium"
    };
    
    // Randomly select an address from a given list
    std::string random_address() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, 1); // Since there are two addresses in each list
    
        // Randomly choose between London or Belgium address
        int rand_choice = dist(gen) % 2;
        if (rand_choice == 0) {
            return london_address[dist(gen)];
        } else {
            return belgium_address[dist(gen)];
        }
    }
}