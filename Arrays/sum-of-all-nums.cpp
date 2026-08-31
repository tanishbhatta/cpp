#include <iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
};

int main(){
    int desiredArr[] = {1,5,6,3,5,6,7};
    int n = sizeof(desiredArr) / sizeof(desiredArr[0]);
    cout << "The sum of the array [1,5,6,3,5,6,7] is " << sumArray(desiredArr, n) << endl; 
}