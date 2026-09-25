#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string lw{}, w{};
    std::getline(std::cin >> std::ws, lw);
    std::getline(std::cin >> std::ws, w);
    int count{};

    for (char &c : w){
        if (lw.find(std::tolower(c)) != std::string::npos) count++;
    }

    std::cout << count << "\n" << w << std::endl;

    return 0;
}