#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& s){
    std::string p{};

    for (char c : s){
        if (std::isalnum(c)){
            if (std::isdigit(c)) p += (c - '0');
            else p += (std::tolower(c) - 'a');
        }
    }
    std::cout << "\n" << p << "\n";

    int left = 0;
    int right = static_cast<int>(p.length()) - 1;

    while (left < right){
        if (std::isalnum(p[left]) && std::isalnum(p[right])){
            if (std::tolower(p[left]) != std::tolower(p[right])) return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s{};
    std::getline(std::cin >> std::ws, s);

    if (isPalindrome(s)) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;

    return 0;
}