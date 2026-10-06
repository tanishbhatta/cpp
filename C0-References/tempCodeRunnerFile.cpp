#include <iostream>
#include <vector>

void printArr(std::vector<int> vec){
    for (int i = 0; i < (static_cast<int>(vec.size())); ++i){
        std::cout << vec[i] << " ";
    }
}

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i<n; ++i){
        int cur { arr[i] };
        std::cin >> cur;
        arr[i] = cur;
    }

    for (int x = 0; x<(n/2); ++x){
        if (arr[x] > arr[n-1-x]){
            int xVal = arr[x];
            arr[x] = arr[n-1-x];
            arr[n-1-x] = xVal;
        }
    }

    printArr(arr);
    
    return 0;
}