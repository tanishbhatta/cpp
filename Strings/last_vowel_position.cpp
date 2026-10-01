#include <iostream>
#include <string>

int main() {
    std::string s{},
    vowels = "aeiou";
    std::cin >> s;
    int pos{};

    for (int i=0; i<(static_cast<int>(s.length())); ++i){
        if (vowels.find(s[i]) != std::string::npos){
            pos = i+1;
        }
    }

    std::cout << pos <<std::endl;

    return 0;
}