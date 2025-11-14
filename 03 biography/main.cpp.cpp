#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string name, city, hobby;
    int age{};

    std::cout << "Your name: ";
    std::getline(std::cin, name);

    std::cout << "Your age: ";
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear newline

    std::cout << "Your city: ";
    std::getline(std::cin, city);

    std::cout << "Your hobby: ";
    std::getline(std::cin, hobby);

    std::cout << "---\nBiography: I am " << name << ", " << age
              << " years old and I live in " << city
              << ". My favorite hobby is " << hobby << ".\n";
    return 0;
}
