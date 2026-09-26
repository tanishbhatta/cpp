#include <iostream>

int main() {
    char c{};
    std::cin >> c;
    
    if (c >= 97 && c <= 109) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}