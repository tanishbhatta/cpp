#include <iostream>
#include <cstdio>

int main() {
    int arr[] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int start=0; start<size; ++start){
        for (int end=start; end<size; ++end){
            for (int k=start; k<=end; ++k){
                std::cout << arr[k];
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }

    return 0;
}