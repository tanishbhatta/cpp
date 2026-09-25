#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string bl{}, w{}, cw{};
    std::getline(std::cin >> std::ws, bl);
    std::getline(std::cin >> std::ws, w);
    int count{};

    for (char c : w){
        cw += std::tolower(c);
    }

    for (char i : cw){
        if (bl.find(i) == std::string::npos) count++;
    }

    std::cout << count << "\n";
    std::cout << w << "\n";
    
    return 0;
}