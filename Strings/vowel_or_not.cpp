#include <iostream>

int main() {
    char al{};
    std::cin >> al;

    if (al == 65 || al == 69 || al == 73 || al == 79 || al == 86 || al == 97 || al == 101 || al == 105 || al == 111 || al == 117) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}