#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s{};
    std::cin >> s;
    int sum {};

    for (char c : s){
        if (std::isdigit(c)) sum += c - '1';
    }

    std::cout << sum << std::endl;

    return 0;
}