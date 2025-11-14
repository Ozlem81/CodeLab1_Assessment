#include <iostream>

int main() {
    long long a{}, b{};
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Sum: " << (a + b) << std::endl;
    return 0;
}
