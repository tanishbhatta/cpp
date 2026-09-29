#include <iostream>
#include <string>

int main() {
    std::string s{};
    int k{};
    std::cin >> s >> k;

    int len { static_cast<int>(s.length()) };

    for (int i = 0; i < len; ++i){
        s[(i+k)%len] = s[i];
    }

    std::cout << s;
    
    return 0;
}