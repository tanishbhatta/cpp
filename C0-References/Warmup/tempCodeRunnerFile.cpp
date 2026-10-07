#include <iostream>
#include <vector>
#include <limits>

int secLargestInArr(const std::vector<int>& vec){
    int high{ std::numeric_limits<int>::min() }, secHigh{ std::numeric_limits<int>::min() };
    for (int i = 0; i < (static_cast<int>(vec.size())); ++i){
        if (vec[i] >= high){
            high = vec[i];
        }else if (vec[i] > secHigh && secHigh < high) secHigh = vec[i];
    }
    return secHigh;
}

bool isDistinctArr(const std::vector<int>& vec){
    bool isDis{};
    int init{ vec[0] };
    for (int i : vec){
        if (init != i) isDis = true;
    }
    return isDis;
}

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i=0; i<n; ++i){
        int v{}; std::cin >> v;
        arr[i] = v;
    }

    if (!isDistinctArr(arr)) std::cout << "NONE" << std::endl;
    else std::cout << secLargestInArr(arr) << std::endl;
    return 0;
}