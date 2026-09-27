#include <iostream>
#include <string>

int main() {
    std::string t{}, p{};
    std::cin >> t;
    std::cin >> p;
    int lenT { static_cast<int>(t.length()) },
    lenP { static_cast<int>(p.length()) },
    count{};

    for (int i = 0; i <= lenT - lenP; ++i){
        if (lenT < lenP) break;
    }

    return 0;
}