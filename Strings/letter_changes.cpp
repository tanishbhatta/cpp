#include <iostream>
#include <string>

int main() {
    std::string word;
    std::getline(std::cin >> std::ws, word);
    int count{};

    for (size_t i = 0; i < word.length(); ++i){
        if (i != word.length() - 1 && word[i] != word[i + 1]) count++;
    }

    std::cout << count << std::endl;

    return 0;
}