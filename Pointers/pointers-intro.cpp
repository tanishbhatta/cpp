#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    cout << "Value: " << x << endl; cout << "Address: " << p <<endl; 
    cout << "Pointer p points to: " << *p << endl;
    *p = 100;
    cout << "Changed value: " << x << endl;
    return 0;
};