/*
filename: pair_sum_sorted.cpp

Given a sorted array of distinct integers nums and a target T, determine whether any two elements sum to T. Return true/false.
*/
#include <iostream>

bool pairSum(int arr[], int size, int target)
{
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (arr[i]+arr[j] == target) return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 1, 6, 7};
    int target = 9;
    int size = sizeof(arr)/sizeof(arr[0]);

    if (pairSum(arr, size, target) == 0) std::cout << "False" << std::endl;
    else std::cout << "True" << std::endl;
    return 0;
}