#include <iostream>
#include <string>
#include <cctype>

bool isPallindrome(std::string word){
    int left{};
    int right = word.length() - 1;

    while (left < right){
        if (std::tolower(word[left]) != std::tolower(word[right])) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string w;
    std::getline(std::cin >> std::ws, w);

    bool isPal = isPallindrome(w);

    if (isPal) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}