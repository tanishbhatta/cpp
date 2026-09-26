#include <iostream>
#include <string>

int main() {
    std::string w{};
    std::cin >> w;
    std::string vow = "aeiou";
    int count{};

    for (char c : w){
        if (vow.find(c) != std::string::npos) count++;
    }

    std::cout << count << std::endl;

    return 0;
}