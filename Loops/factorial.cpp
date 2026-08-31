#include <iostream>
using namespace std;

int factorial(int n){
    if (n<=1) return 1;
    return n * factorial(n-1);
};

int main(){
    int num;
    cout << "Find factorial of a number: ";
    cin >> num;
    cout << "Factorial of the number "<< num << " is " << factorial(num) << endl;
    return 0;
}