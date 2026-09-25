#include <iostream>
#include <cctype>

int main() {
    char c{};
    std::cin >> c;
    c = std::tolower(c);

    switch (c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << "NO" << "\n";
            break;
        default:
            std::cout << "YES" << "\n";
            break;
    }

    return 0;
}