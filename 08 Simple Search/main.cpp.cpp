#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string toLower(const std::string& s) {
    std::string out = s;
    std::transform(out.begin(), out.end(), out.begin(), ::tolower);
    return out;
}

int main() {
    std::vector<std::string> arr = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    std::string target;

    // Optional: let user enter a name; if empty, default to "Sam"
    std::cout << "Enter name to search (or press Enter to search for 'Sam'): ";
    std::getline(std::cin, target);
    if (target.empty()) target = "Sam";

    std::string targetLower = toLower(target);
    bool found = false;
    for (const auto& name : arr) {
        if (toLower(name) == targetLower) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << target << " was found in the array." << std::endl;
    } else {
        std::cout << target << " was NOT found in the array." << std::endl;
    }

    return 0;
}
