#include <iostream>
#include <string>

int main() {
    std::string d{};
    std::cin >> d;
    int maxDig{};
    
    for (char c : d){
        if (c - '0' > maxDig) maxDig = c - '0';
    }
    
    int maxVal = maxDig;
    for (int i = 0; i <= maxDig; ++i){
        for (char c : d){
            if (c - '0' == maxVal){
                std::cout << c - '0';
            }
        }
        maxVal--;
    }

    return 0;
}