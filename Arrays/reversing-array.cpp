#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int pointerL = 0;
    int pointerR = n-1;

    while (pointerL < pointerR){
        int temp = arr[pointerR];
        arr[pointerR] = arr[pointerL];
        arr[pointerL] = temp;

        pointerL++;
        pointerR--;
    };
};

void printArray(int arr[], int n){
    cout << '[';
    for (int i=0; i<n; i++){
        if(i==n-1) cout << arr[i];
        else cout << arr[i] << ", ";
    } cout << "]";
}

int main(){
    int demoArr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(demoArr)/sizeof(demoArr[0]);

    cout << "Before reversing: ";
    printArray(demoArr, size);

    reverseArray(demoArr, size);
    cout << "\nAfter reversing: ";
    printArray(demoArr, size);
    return 0;
}