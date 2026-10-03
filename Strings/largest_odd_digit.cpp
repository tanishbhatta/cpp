#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s{};
    std::cin >> s;
    int lm {-1};
    
    for (char c : s){
        int dig = c - '0';
        if (std::isdigit(c) && dig % 2 != 0 && dig > lm) lm = dig;
    }

    std::cout << lm << std::endl;
    return 0;
}