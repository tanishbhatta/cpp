#include <iostream>
#include <string>
#include <limits>
#include <cctype>

int main() {
    std::string s{};
    std::cin >> s;
    int sm {std::numeric_limits<int>::max()};

    for (char c : s){
        int dig = c - '0';
        if (std::isdigit(c) && dig < sm && dig % 2 == 0) sm = dig;
    }

    if (sm == std::numeric_limits<int>::max()){
        std::cout << -1 << std::endl;
        return 0;
    }

    std::cout << sm << std::endl;
    return 0;
}