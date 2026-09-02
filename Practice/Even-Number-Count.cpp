// The program first asks how many numbers you want to check. Then, for each number you enter, it counts how many of its digits are even numbers (like 2, 4, 6, 8, or 0).
// Input:
// 2       (Total numbers to check)
// 1436    (First number)
// 579     (Second number)
// Output:
// 1436 has 2 even digits
// 579 has 0 even digits
#include <iostream>
#include <string>
using namespace std;

void numGen(int n){
    for (int i=0; i<n; i++){
        int userInp;
        cout << "Enter the number: ";
        cin >> userInp;
        string strUserInp = to_string(userInp);
        int counter = 0;
        for (int j=0; j<(strUserInp.length()); j++){
            if (strUserInp[j]%2==0) counter += 1;
        }
        cout << "Even number count in it = " << counter << endl;
    }
};

int main(){
    int nums;
    cout << "How many numbers do you want to check?" << endl; cout << "-> ";
    cin >> nums;
    numGen(nums);
};

