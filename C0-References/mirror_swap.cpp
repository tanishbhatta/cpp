#include <iostream>
#include <vector>

void printArr(const std::vector<int>& vec){
    for (int i = 0; i < (static_cast<int>(vec.size())); ++i){
        std::cout << vec[i] << " ";
    }
}

int swapArrayRetCount(std::vector<int>& vec){
    int count{},
    n { static_cast<int>(vec.size()) };

    for (int x = 0; x<(n/2); ++x){
        if (vec[x] > vec[n-1-x]){
            int xVal = vec[x];
            vec[x] = vec[n-1-x];
            vec[n-1-x] = xVal;
            count++;
        }
    }

    return count;
}

int main() {
    int n{};
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i<n; ++i){
        int cur {};
        std::cin >> cur;
        arr[i] = cur;
    }
    
    int count { swapArrayRetCount(arr) };

    printArr(arr);
    std::cout << "\n" << count << std::endl;
    
    return 0;
}