#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s{}, p{};
    std::cin >> s >> p;
    bool isPat{true};

    int sLen{ static_cast<int>(s.length()) },
    pLen { static_cast<int>(p.length()) },
    pos{};

    for (int i = (sLen-pLen); i <= (sLen-pLen); ++i){
        for (int j = 0; j < pLen; ++j){
            if (s[i+j] != p[j]){
                isPat = false;
                break;
            }
        }
        if (isPat) pos = i+1;
        isPat = true;
    }

    std::cout << pos;

    return 0;
}