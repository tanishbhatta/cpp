#include <iostream>
#include <string>

int main() {
    std::string w1{}, w2{};
    std::cin >> w1;
    std::cin >> w2;
    int arr[26]{}, wno{};

    for (char c : w1){
        arr[c - 'a']++;
    }

    for (char c : w2){
        arr[c - 'a']--;
    }

    for (int i = 0; i < 26; ++i){
        if (arr[i] < 0) arr[i] *= -1;
        wno += arr[i];
    }

    std::cout << wno << std::endl;
    return 0;
}