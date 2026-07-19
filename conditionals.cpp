#include <iostream>
using namespace std;

bool function() 
{
    int tries = 0;
    while (tries<4){
        cout << "Are you a human (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer)
        {
        case 'y':
        return true;
        case 'n':
        return false;
        default:
        cout << "Sorry I didn't understand.\n";
        ++tries;
        }
    }
    cout << "I guess I will take that as a NO.\n";
    return false;
}

int main() {
    if (function()) {
        cout << "Thank god!";
    } else cout << "So youre a robot huh.";
}