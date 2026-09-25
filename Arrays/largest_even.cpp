#include <iostream>

int main(){
    int n{}, ev{};
    std::cin >> n;

    for (int i = 0; i<n; i++){
        int num{};
        std::cin >> num;
        if (i == 0) ev = num;
        if (num%2 == 0 && num > ev) ev = num;
    }

    std::cout << ev << std::endl;
    return 0;
}