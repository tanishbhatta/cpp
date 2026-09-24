#include <iostream>

void printArr(int arr[], int size)
{
    std::cout << "[";
    for (int i=0; i<size; ++i){ 
        if (i != size-1) std::cout << arr[i] << ", ";
        else std::cout << arr[i];
    };
    std::cout << "]\n";
}

int main()
{
    int arr[] = {1, 0, 0, 3, 0, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pos = 1;
    std::cout << "Before: "; printArr(arr, size);

    for (int i=0; i<size; ++i){
        if (arr[i] != 0 && pos != i){
            arr[pos] = arr[i];
            arr[i] = 0;
            pos++;
        }
    }

    std::cout << "After: "; printArr(arr, size);
    return 0;
}