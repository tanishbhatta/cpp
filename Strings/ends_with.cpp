#include <iostream>
#include <string>

int main() {
    std::string s{}, p{};
    std::cin >> s;
    std::cin >> p;
    int sLen{ static_cast<int>(s.length())},
    pLen { static_cast<int>(p.length()) },
    lenDiff { sLen - pLen };

    if (sLen < pLen){
        std::cout << "NO" << std::endl;
        return 0;
    }

    for (int i = lenDiff; i <= lenDiff; ++i){
        bool isPat {true};
        for (int j = 0; j < pLen; ++j){
            if (s[i+j] != p[j]) isPat = false;
        }

        if (isPat){
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    
    return 0;
}