#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    int arr[26]{};

    for (char c : s){
        arr[c - 'a']++;
    }

    for (int i=0; i<26; ++i){
        if (arr[i] != 0) std::cout << static_cast<char>(i+'a') << " " << arr[i] << std::endl;
    }

    return 0;
}