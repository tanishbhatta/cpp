#include <iostream>

int main() {
    int n{}, res{};
    std::cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        int item{};
        std::cin >> item;
        arr[i] = item;
        res += arr[i];
    }

    std::cout << res << std::endl;
    return 0;
}