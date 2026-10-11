#include <iostream>

int main() {
    int n1 {17}, n2 {5};

    std::cout << n1 / n2 << std::endl;
    std::cout << n1%n2 << std::endl;
    std::cout << static_cast<double>(n1) / static_cast<double>(n2) << std::endl;
    std::cout << -(n1)/n2 << std::endl;
    std::cout << -(n1) % n2 << std::endl;

    return 0;
}