#include <iostream>
#include <random>
#include <string>
using namespace std;

int main(){
    random_device rnd;
    mt19937 gen(rnd());

    int low; 
    int high;
    int atm;
    cout << "Enter the lower range: ";
    cin >> low;
    cout << "Enter the upper range: ";
    cin >> high;
    cout << "Enter the number of attempts you want to try: ";
    cin >> atm;

    uniform_int_distribution<int> distrib(low, high);
    int num = distrib(gen);

    bool warn = false;
    int count = 1;
    while (count <= atm){
        int guess;
        if (count == atm) warn = true;
        if(warn) cout << "\nFinal Attempt! Guess a number: ";
        else cout << "Attempt " << count << "Guess a number: ";
        cin >> guess;

        if (guess == num){
            cout << "You've guessed the number in " << count << " attempts.";
            break;
        }else if(guess > num){
            cout << "The number is lower." << endl;
        }else{
            cout << "The number is higher." << endl;
        }
        count += 1;
    };

};