#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;
    int len { static_cast<int>(word.length()) };

    std::cout << word[0] << " " << word[len - 1] << std::endl;

    return 0;
}