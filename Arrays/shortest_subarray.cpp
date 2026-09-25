#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; ++i){
        int v{};
        cin >> v;
        arr[i] = v;
    }

    cin >> s;

    cout << arr[2];
    return 0;
}