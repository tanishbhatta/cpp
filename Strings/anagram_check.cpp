#include <iostream>
#include <string>

bool isAnagram(const std::string &s, const std::string &w){
    int arrS[26]{}, arrW[26]{};

    for (char c : s){
        arrS[c - 'a']++;
    }

    for (char c : w){
        arrW[c - 'a']++;
    }

    for (int i = 0; i<26; ++i){
        if (arrS[i] != arrW[i]) return false;
    }
    return true;
}

int main() {
    std::string s{}, w{};
    std::cin >> s;
    std::cin >> w;

    if (isAnagram(s, w)) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}