#include <iostream>
#include <string>

int pattCount(const std::string &s, const std::string &p){
    int lenS { static_cast<int>(s.length()) },
    lenP { static_cast<int>(p.length()) }, 
    count{};
    
    if (lenS < lenP) return 0;

    for (int i = 0; i<lenS; ++i){
        if (i < lenS - lenP){
            for (int j = i; j<lenP; ++j){
                if (s[j] == p[j]) count++;
            }
        }
    }
    return count;
}

int main() {
    std::string s{}, p{};
    std::cin >> s; std::cin >> p;

    int count { pattCount(s, p) };
    std::cout << count << std::endl;

    return 0;
}