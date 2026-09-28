#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    int alphaArr[26]{};

    for (char c : s){
        alphaArr[c - 'a']++;
    }

    for (int i = 25; i >= 0; --i){
        if (alphaArr[i]){
            for (int j=0; j<alphaArr[i]; ++j){
                std::cout << static_cast<char>(i + 'a');
            }
        }
    }

    return 0;
}