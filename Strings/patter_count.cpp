#include <iostream>
#include <string>

int pattCount(const std::string &s, const std::string &p){
    int lenS { static_cast<int>(s.length()) },
    lenP { static_cast<int>(p.length()) }, 
    count{};
    bool isPat { true };

    for (int i = 0; i<(lenS-lenP); ++i){
        for (int j = 0; j<lenP; ++j){
            if (s[i+j] != s[j]){
                isPat = false;
                break;
            }
        }
        if (isPat) count++;
        isPat = true;
    }

    return count;
}

int main(){
    std::string s{}, p{};
    std::cin >> s >> p;

    std::cout << pattCount(s, p) << std::endl;
    return 0;
}
