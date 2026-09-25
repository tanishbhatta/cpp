#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string lc{}, w{}, cw{};
    std::getline(std::cin >> std::ws, lc);
    std::getline(std::cin >> std::ws, w);
    int count{};

    for (char c : w){
        cw += std::tolower(c);
    }

    for (char i : cw){
        if (lc.find(i) != std::string::npos) count++;
    }
    
    std::cout << count << "\n";
    std::cout << w << "\n";
    return 0;
}