#include <iostream>
#include <string>

int main() {
    const std::string correct = "12345";
    const int maxAttempts = 5;
    int attempts = 0;
    std::string attempt;

    std::cout << "Enter the password: ";

    while (std::getline(std::cin, attempt)) {
        attempts++;
        if (attempt == correct) {
            std::cout << "Welcome to the Secure Area" << std::endl;
            break;
        } else {
            if (attempts >= maxAttempts) {
                std::cout << "Maximum attempts reached. Authorities have been alerted!" << std::endl;
                break;
            } else {
                std::cout << "Incorrect password. Attempts remaining: " 
                          << (maxAttempts - attempts) << std::endl;
                std::cout << "Enter the password: ";
            }
        }
    }
    return 0;
}
