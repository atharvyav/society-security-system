#include <iostream>

int main() {
    std::cout << "Welcome to the Society Security System" << std::endl;
    std::cout << "1. Initialize Security System" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cout << "Please select an option: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Security System Initialized." << std::endl;
            break;
        case 2:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
    }

    return 0;
}