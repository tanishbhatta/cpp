#include <iostream>
#include <string>

int main() {
    std::string s{}, p{};
    std::cin >> s;
    std::cin >> p;

    int sLen { static_cast<int>(s.length()) },
    pLen { static_cast<int>(p.length()) },
    diffInStrPat { sLen - pLen },
    pos{};

    for (int i = 0; i<=(sLen-pLen); ++i){
        bool isPat { true };
        for (int j = 0; j<pLen; ++j){
            if (s[i+j] != p[j]){
                isPat = false;
                break;
            }
        }
        if (isPat) pos = i+1;
    }

    std::cout << pos << std::endl;

    return 0;
}