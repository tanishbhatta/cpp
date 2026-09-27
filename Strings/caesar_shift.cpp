#include <iostream>
#include <string>

int main() {
    std::string s{};
    int k{};
    std::cin >> s;
    std::cin >> k;
    
    for (char c : s){
        int cPos = (c - 'a') + k;
        std::cout << static_cast<char>((cPos % 26) + 'a');
    }

    return 0;
}