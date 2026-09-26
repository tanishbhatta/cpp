#include <iostream>
#include <string>
using namespace std;

int main() {
    string s{};
    cin >> s;
    int len { static_cast<int>(s.length()) };
    char fc { s[0] }, lc { s[len-1] };
    string ns{};

    for (int i=0; i<len; ++i){
        if (i==0) s[i] = lc;
        else if (i == len-1) s[len-1] = fc;
        ns += s[i];
    }

    cout << ns << endl;

    return 0;
}