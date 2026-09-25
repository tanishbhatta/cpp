#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string w;
    std::getline(std::cin >> std::ws, w);
    int count{};
    std::string targ = "aeiou";
    
    for (char &c : w){
        c = std::tolower(c);
        if (targ.find(c) == std::string::npos) count ++;
    }

    std::cout << count << std::endl;

    return 0;
}