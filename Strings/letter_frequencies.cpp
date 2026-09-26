#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    int arr[26]{};

    for (char c : s){
        int slot = c - 'a';
        arr[slot]++;
    }

    for (int i=0; i<26; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}