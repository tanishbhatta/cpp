#include <iostream>

int main() {
    int n{}, min{}, ind{};
    bool firstPass{};
    std::cin >> n;

    for (int i = 0; i<n; i++){
        int num{};
        std::cin >> num;
        if (!firstPass){
            min = num;
            firstPass = true;
        };

        if (num <= min){
            min = num;
            ind = i+1;
        };
    }

    std::cout << ind << std::endl;

    return 0;
}