#include <iostream>

int main() {
    std::cout << "Count up 0 to 50:" << std::endl;
    for (int i = 0; i <= 50; ++i) std::cout << i << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Count down 50 to 0:" << std::endl;
    for (int i = 50; i >= 0; --i) std::cout << i << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Count up 30 to 50:" << std::endl;
    for (int i = 30; i <= 50; ++i) std::cout << i << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Count down 50 to 10 in steps of 2:" << std::endl;
    for (int i = 50; i >= 10; i -= 2) std::cout << i << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Count up 100 to 200 in steps of 5:" << std::endl;
    for (int i = 100; i <= 200; i += 5) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
