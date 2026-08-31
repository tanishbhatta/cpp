#include <iostream>
using namespace std;

bool divisible(int num, int divisor){
    if (num % divisor == 0) return true;
    return false;
};

int main(){
    for (int i=1; i<21; i++){ 
        if (divisible(i,3) && divisible(i,5)) cout << "FizzBuzz" << endl;
        else if (divisible(i,5)) cout << "Buzz" << endl;
        else if (divisible(i,3)) cout << "Fizz" << endl;
        else cout << i << endl;
    }
    return 0;
};