//Write a C++ program that asks the user for their age, then prints "You are an adult" if age is 18 or above, otherwise prints "You are a minor."
#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18){
        cout << "You are an adult." << endl;
        return 0;
    }else{
        cout << "You are a minor." << endl;
        return 0;
    }
};