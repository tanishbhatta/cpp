#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;

    for (char c : s) {
        std::cout << (c - 'a') + 1 << " ";
    }

    return 0;
}