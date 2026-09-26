#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    char fl { s[0] };
    int count {};

    for (char c : s){
        if (c == fl) count++;
    }

    std::cout << count << std::endl;

    return 0;
}