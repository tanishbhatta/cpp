#include <iostream>
using namespace std;

bool ispalindrome(string word, int size){ //"level"
    int pointerL = 0;
    int pointerR = size - 1;
    int test = 0;
    while (pointerL < pointerR){
        if (word[pointerL] == word[pointerR]) test += 1;
        else return false;
        pointerL++;
        pointerR--;
    };
    return true;
}; 

int main(){
    string name = "aarush";
    int length = name.length();
    cout << ispalindrome(name, length) << endl;
};