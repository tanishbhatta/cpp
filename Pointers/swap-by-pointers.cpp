#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *y = *x;
    *x = *y;
    cout << "First: " << *x << " Second: " << *y << endl;
};

int main(){
    int a =  4;
    int b = 9;
    int* a = &a;
    int* b = &b;
    cout << "Before swapping :-\nFirst: " << a << " Second: " << b << endl;
    cout << "After swapping :-\n";
    swap(*a,*b);
    return 0;
}