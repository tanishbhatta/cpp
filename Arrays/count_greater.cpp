#include <iostream>

int countGreater(int arr[], int size, int k){
    int count = 0;
    for (int i=0; i<size; i++){
        if (arr[i] > k) count++;
    }
    return count;
}

int main(){
    int n{}, k{};
    std::cin >> n;
    std:: cin >> k;
    int arr[n];

    for (int i=0; i<n; i++){
        int item{};
        std::cin >> item;
        arr[i] = item;
    }

    std::cout << countGreater(arr, n, k) << std::endl;
    return 0;
}