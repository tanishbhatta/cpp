#include <iostream>
#include <string>

int main() {
    std::string e{};
    std::cin >> e;

    std::cout << "\n";
    for (char c : e){
        if ((c - '0') % 2 == 0) std::cout << c - '0' << " ";
    }

    return 0;
}