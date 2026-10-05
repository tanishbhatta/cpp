#include <iostream>
#include <vector>

void reverseArr(std::vector<int>& vec){
    int left = 0;
    int right = static_cast<int>(vec.size()) - 1;
    while (left < right){
        int st = vec[left];
        vec[left] = vec[right];
        vec[right] = st;
        left++;
        right--;
    }
}

void printArr(const std::vector<int>& vec){
    for (int i = 0; i < static_cast<int>(vec.size()); ++i){
        std::cout << vec[i] << " ";
    }
}

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i=0; i<n; ++i){
        int val{};
        std::cin >> val;
        arr[i] = val;
    }
    reverseArr(arr);
    printArr(arr);
    return 0;
}