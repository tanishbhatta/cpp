#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string w{};
    std::getline(std::cin >> std::ws, w);
    int count = 1;

    for (size_t i = 0; i < w.length(); ++i){
        if (!std::isalpha(w[i]) && std::isalpha(w[i+1])) count++;
    }

    std::cout << count << std::endl;

    return 0;
}