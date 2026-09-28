#include <iostream>
#include <string>

int main() {
    std::string s{}, p{};
    std::cin >> s;
    std::cin >> p;

    int sLen { static_cast<int>(s.length()) },
    pLen { static_cast<int>(p.length()) },
    diffInStrPat { sLen - pLen };
    bool isPat { true };

    if (sLen < pLen){
        std::cout << -1 << std::endl;
        return 0;
    }

    return 0;
}