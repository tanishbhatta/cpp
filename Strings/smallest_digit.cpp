#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    bool foundDig {};
    int sm {};

    for (char c : s){
        if (!foundDig && std::isdigit(c)){
            sm = c;
            foundDig = true;
        }
        if (foundDig && std::isdigit(c) && c - '0' < sm) sm = c - '0';
    }

    if (!foundDig){
        std::cout << -1 << std::endl;
        return 0;
    }

    std::cout << sm << std::endl;

    return 0;
}