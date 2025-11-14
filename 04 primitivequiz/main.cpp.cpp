#include <iostream>
#include <cctype>
#include <string>

char ask(const std::string& q) {
    std::cout << q << " (y/n): ";
    char a{}; std::cin >> a;
    a = static_cast<char>(std::tolower(static_cast<unsigned char>(a)));
    return a;
}

int main() {
    int score = 0;

    if (ask("1) Is 'int' at least 16 bits on most systems?") == 'y') score++;
    if (ask("2) Does 'bool' represent true/false values?") == 'y') score++;
    if (ask("3) Does 'char' store a single character?") == 'y') score++;
    if (ask("4) Is 'double' used for floating-point numbers?") == 'y') score++;
    if (ask("5) Is 'long long' generally wider than 'int'?") == 'y') score++;

    std::cout << "Correct answers: " << score << "/5" << std::endl;
    return 0;
}
