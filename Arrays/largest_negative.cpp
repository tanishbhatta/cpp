#include <iostream>

int main() {
    int n{}, neg{};
    bool first{};
    std::cin >> n;

    for (int i = 0; i < n; i++){
        int num{};
        std::cin >> num;
        if (!first && num < 0){
            neg = num;
            first = true;
        }
        if (num < 0 && num > neg) neg = num;
    }
    
    if (first) std::cout << neg << std::endl;
    else std::cout << "NONE" << std::endl;
    return 0;
}