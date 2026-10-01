#include <iostream>
#include <string>

int pattCount(const std::string &s, const std::string &p){
    int lenS { static_cast<int>(s.length()) },
    lenP { static_cast<int>(p.length()) }, 
    count{};

    for (int i = 0; i<=(lenS-lenP); ++i){
        bool isPat { true };
        for (int j = 0; j<lenP; ++j){
            if (s[i+j] != s[j]){
                isPat = false;
                break;
            }
        }
        if (isPat) count++;
    }

    return count;
}

int main(){
    std::string s{}, p{};
    std::cin >> s >> p;

    std::cout << pattCount(s, p) << std::endl;
    return 0;
}
