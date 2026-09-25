#include <iostream>

int main(){
    int n{}, lar{}, sma{};
    std::cin >> n;

    for (int i = 0; i<n; i++){
        int val{};
        std::cin >> val;
        if (val > lar) lar = val;
        if (val < sma) sma = val;
    }

    std::cout << lar - sma << std::endl;
    return 0;
}