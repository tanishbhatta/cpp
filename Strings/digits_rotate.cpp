#include <iostream>
#include <string>

int main() {
    std::string s{};
    int k{};
    std::cin >> s;
    std::cin >> k;
    int pos{};
    if (k > 0) pos = k%10;

    for (char c : s){
        if (pos != 0) std::cout << c - '0'+ pos;
        else std::cout << c - '0'+ k;
    }

    return 0;
}