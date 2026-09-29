#include <iostream>
#include <string>

int main() {
    std::string s{}, w{};
    std:: cin >> s >> w;

    char charArr[26]{};

    int sLen { static_cast<int>(s.length()) },
    wLen { static_cast<int>(w.length()) };
    
    if (sLen != wLen){
        std::cout << "NO" << std::endl;
        return 0;
    }

    for (int i = 0; i < sLen; ++i){
        for (char c : s){
            charArr[c - 'a'] = w[i];
            break;
        }
    }

    return 0;
}