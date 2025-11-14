#include <iostream>

bool isLeap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return (year % 4 == 0);
}

int main() {
    int month{}, year{};

    std::cout << "Month (1-12): ";
    std::cin >> month;

    std::cout << "Year (e.g., 2024): ";
    std::cin >> year;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month!" << std::endl;
        return 0;
    }

    int days = 0;
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            days = 31; break;
        case 4: case 6: case 9: case 11:
            days = 30; break;
        case 2:
            days = isLeap(year) ? 29 : 28; break;
    }

    std::cout << "Days in month: " << days << std::endl;
    return 0;
}
