#include <iostream>
#include <string>

int main() {
    std::string s{};
    int k{};
    std::cin >> s;
    std::cin >> k; 

    int len { static_cast<int>(s.length()) };

    if (k > len) std::cout << "OUT" << std::endl;
    else std::cout << s[k-1] << std::endl;

    return 0;
}