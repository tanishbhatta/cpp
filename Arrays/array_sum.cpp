#include <iostream>

int arrSum(int arr[], int size){
    int res{};
    for (int i=0; i<size; i++){
        res += arr[i];
    }
    return res;
}

int main() {
    int n{};
    std::cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        int item{};
        std::cin >> item;
        arr[i] = item;
    }

    std::cout << arrSum(arr, n) << std::endl;
    return 0;
}