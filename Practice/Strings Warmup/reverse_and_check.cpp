#include <iostream>
#include <string>
#include <cctype>

std::string revStr(std::string &s){
    std::string reversed{};
    int len { static_cast<int>(s.length()) };

    for (int i = len - 1; i >=0; i--){
        reversed += s[i];
    }

    return reversed;
}

int main() {
    std::string s{};
    std::cin >> s;
    std::string ns = revStr(s);

    std::cout << ns << std::endl;

    if (s == ns) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}