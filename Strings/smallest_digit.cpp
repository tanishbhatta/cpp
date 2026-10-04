#include <iostream>
#include <string>
#include <cctype>pafghjk

int main() {
    std::string s{};
    std::cin >> s;
    int sm {10};

    for (char c : s){
        int dig = c - '0';
        if (std::isdigit(c) && dig < sm) sm = dig;
    }

    if (sm == 10) std::cout << -1 << std::endl;
    else std::cout << sm << std::endl;

    return 0;
}