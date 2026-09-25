#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string alc{}, w{};
    std::getline(std::cin >> std::ws, alc);
    std::getline(std::cin >> std::ws, w);
    int count{};

    for (char &c : w){
        c = std::tolower(c);
        if (alc.find(c) != std::string::npos) count++;
    }

    std::cout << count << std::endl;

    return 0;
}