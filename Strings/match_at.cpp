#include <iostream>
#include <string>

int main() {
    std::string str{}, pat{};
    int p{};
    std::cin >> str;
    std::cin >> pat;
    std::cin >> p;

    int strLen { static_cast<int>(str.length()) },
    patLen { static_cast<int>(pat.length()) };

    if (strLen < patLen){
         std::cout << "NO" << std::endl;
         return 0;
    }

    for (int i = 0; i <= (strLen - patLen); ++i){
        bool isPat {true};
        for (int j = 0; j < patLen; ++j){
            if (str[i+j] != pat[j]) isPat = false;
        }
        if (i+1 == p && isPat){
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;

    return 0;
}