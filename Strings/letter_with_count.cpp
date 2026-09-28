#include <iostream>
#include <string>

int main() {
    std::string s{};
    int c{};
    std::cin >> s;
    std::cin >> c;
    int arr[26]{};
    bool letExist {};

    for (char ch : s){
        arr[ch - 'a']++;
    }

    for (int i=0; i<26; ++i){
        if (arr[i] == c){
            std::cout << static_cast<char>(i + 'a');
            letExist = true;
        };
    }

    if (!letExist) std::cout << "NONE" << std::endl;

    return 0;
}