#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    int arr[26]{}, maxVal{}, cPos{};

    for (char c : s){
        arr[c - 'a']++;
    }

    for (int i = 0; i<26; ++i){
        if (arr[i] > maxVal){
            maxVal = arr[i];
            cPos = i;
        }
    }

    std::cout << static_cast<char>(cPos+'a') << " " << maxVal << std::endl;


    return 0;
}