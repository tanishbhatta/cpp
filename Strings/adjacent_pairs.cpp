#include <iostream>
#include <string>

int main() {
    std::string word;
    std::getline(std::cin >> std::ws, word);
    int count{};

    for (int i = 0; static_cast<int>(word.length()); i++){
        if (word[i] == word[i+1]) count++;
    }

    std::cout << count << std::endl;

    return 0;
}