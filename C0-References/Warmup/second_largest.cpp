#include <iostream>
#include <vector>

int secLargestInArr(const std::vector<int>& vec){
    int high{ vec[0] }, secHigh{ vec[0] };
    for (int i = 0; i < (static_cast<int>(vec.size())); ++i){
        if (vec[i] > high){
            secHigh = high;
            high = vec[i];
        }
    }
    return secHigh;
}

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i=0; i<n; ++i){
        int v{}; std::cin >> v;
        arr[i] = v;
    }

    std::cout << secLargestInArr(arr) << std::endl;
    return 0;
}