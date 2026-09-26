#include <iostream>
#include <string>

int main() {
    std::string n{};
    std::cin >> n;
    int sum{};

    for (char c : n){
        sum += c - '1' +1;
    }

    std::cout << sum << std::endl;

    return 0;
}