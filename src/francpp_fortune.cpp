#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 0 and 10
    int wrozba = std::rand() % 11;

    // Switch statement based on the value of wrozba
    switch (wrozba) {
        case 0:
            std::cout << "Wrozba 0: Very good luck!" << std::endl;
            break;
        case 1:
            std::cout << "Wrozba 1: You will find happiness soon!" << std::endl;
            break;
        case 2:
            std::cout << "Wrozba 2: Be cautious in the coming days." << std::endl;
            break;
        case 3:
            std::cout << "Wrozba 3: Today is your lucky day!" << std::endl;
            break;
        case 4:
            std::cout << "Wrozba 4: Keep your friends close." << std::endl;
            break;
        case 5:
            std::cout << "Wrozba 5: A great opportunity is coming." << std::endl;
            break;
        case 6:
            std::cout << "Wrozba 6: Trust your instincts." << std::endl;
            break;
        case 7:
            std::cout << "Wrozba 7: Good things come to those who wait." << std::endl;
            break;
        case 8:
            std::cout << "Wrozba 8: Someone important will enter your life." << std::endl;
            break;
        case 9:
            std::cout << "Wrozba 9: Don't worry, things will get better." << std::endl;
            break;
        case 10:
            std::cout << "Wrozba 10: Take a risk today!" << std::endl;
            break;
        default:
            std::cout << "Unexpected case!" << std::endl;
            break;
    }

    return 0;
}
