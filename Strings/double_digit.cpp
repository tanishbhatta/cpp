#include <iostream>

int main() {
    char c{};
    std::cin >> c;

    std::cout << (c-'1') * 2 << std::endl;

    return 0;
}