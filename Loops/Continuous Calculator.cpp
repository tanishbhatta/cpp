//Ask the user for two numbers and a symbol (+, -, *, or /) as a char, then print the result of that operation — basically a mini calculator. Use if/else if to check which symbol was entered.
#include <iostream>
#include <string>
using namespace std;

int main(){
    while (true){
        int num1;
        int num2;
        string opr;
        string check;
        cout << "Again? (y or n): ";
        cin >> check;
        if (opr == "n"){
            break;
        }
        cout << "Enter the first number";
        cin >> num1;
        cout << "Operator: ";
        cin >> opr;
        cout << "Enter the second number: ";
        cin >> num2;
        if (opr == "+"){
            cout << "The sum is " << num1 + num2 << endl;
        }else if(opr == "-"){
            cout << "The difference is " << num1 - num2 << endl;
        }else if(opr == "*"){
            cout << "The product is " << num1*num2 << endl;
        }else{
            if(num2 == 0){
                cout << "Undefined." << endl;
            }else{
                cout << "The quotient is " << num1/num2 << endl;

            }
        }
    }
}