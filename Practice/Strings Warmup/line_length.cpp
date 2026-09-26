#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::getline(std::cin >> std::ws, s);
    int len { static_cast<int>(s.length()) };

    std::cout << len << std::endl;

    return 0;
}