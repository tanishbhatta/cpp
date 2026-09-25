#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string w{};
    std::getline(std::cin, w);
    bool hasSeenFirstLetter{};

    for (int i = 0; i < static_cast<int>(w.length()); ++i){
        if (!hasSeenFirstLetter && std::isalpha(w[i])){
            std::cout << w[i];
            hasSeenFirstLetter = true;
        }
        if (hasSeenFirstLetter && !std::isalpha(w[i])) {
            if (i != static_cast<int>(w.length())-1 && std::isalpha(w[i+1])){
                std::cout << w[i+1];
            }
        }
    }

    return 0;
}