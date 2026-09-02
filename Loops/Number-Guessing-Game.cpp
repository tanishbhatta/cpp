#include <iostream>
#include <random>
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

    int count = 0;
    while (count < atm){
        
    };

};