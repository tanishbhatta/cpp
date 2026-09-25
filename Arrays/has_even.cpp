#include <iostream>

int main() {
    int n{};
    bool hasEven{};
    std::cin >> n;
    
    for (int i = 0; i < n; i++){
        int num{};
        std::cin >> num;
        if (num%2 == 0) hasEven = true;
    }

    if (hasEven) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}