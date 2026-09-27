#include <iostream>
#include <string>

int main() {
    std::string str{}, pat{};
    int p{};
    std::cin >> str;
    std::cin >> pat;
    std::cin >> p;
    bool isPat{ true };

    int strLen { static_cast<int>(str.length()) },
    patLen { static_cast<int>(pat.length()) };

    if (strLen < patLen) std::cout << "NO" << std::endl;

    for (int i = 0; i <= (strLen - patLen); ++i){
        for (int j = 0; j < patLen; ++j){
            if (str[i+j] != pat[j]) isPat = false;
        }
        if (i+1 == p && isPat){
            std::cout << "YES" << std::endl;
            return 0;
        }
        isPat = true;
    }
    std::cout << "NO" << std::endl;

    return 0;
}