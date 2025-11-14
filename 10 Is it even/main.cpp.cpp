#include <iostream>
#include <string>
#include <limits>   // <-- bu satır gerekli

std::string checkEven(int n) {
    if (n % 2 == 0) return "The provided number is even";
    else return "The provided number is odd";
}

int main() {
    int number{};
    std::cout << "Enter a number: ";
    while (!(std::cin >> number)) {
        std::cin.clear(); // clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // needs <limits>
        std::cout << "Invalid input. Please enter an integer: ";
    }

    std::string result = checkEven(number);
    std::cout << result << std::endl;
    return 0;
}
