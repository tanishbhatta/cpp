#include <iostream>

int main() {
    int n{}, ev{};
    bool casePassed{};

    std::cin >> n;

    for (int i = 0; i < n; i++){
        int num{};
        std::cin >> num;
        if (num%2 == 0 && !casePassed){
            ev = num;
            casePassed = true;
        }
    }

    if (casePassed) std::cout << ev << std::endl;
    else std::cout << "NONE" << std::endl;

    return 0;
}