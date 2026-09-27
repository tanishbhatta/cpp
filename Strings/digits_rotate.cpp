#include <iostream>
#include <string>

int main() {
    std::string sd{};
    int k{};
    std::cin >> sd;
    std::cin >> k;

    for (char d : sd){
        int dig = (d - '0') + k;
        std::cout << dig % 10;
    }

    return 0;
}