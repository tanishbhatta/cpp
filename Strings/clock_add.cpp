#include <iostream>
#include <string>

int main() {
    int h{}, k{};
    std::cin >> h;
    std::cin >> k;
    int next = h+k;

    std::cout << next%12 << std::endl;
    return 0;
}