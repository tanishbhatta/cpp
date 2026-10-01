#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s{};
    std::cin >> s;
    int pos{-1};

    for (int i = 0; i < (static_cast<int>(s.length())); ++i){
        if (std::isdigit(s[i])){
            pos = i + 1;
        } 
    }

    std::cout << pos << std::endl;
    

    return 0;
}