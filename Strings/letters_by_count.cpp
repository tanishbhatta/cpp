#include <iostream>
#include <string>

bool hasEqualFreq(int arr[], int size){
    int com{};
    for (int i = 0; i < size; ++i){
        if (arr[i]){
            com = arr[i];
            break;
        }
    }

    for (int i = 0; i < size; ++i){
        if (arr[i] && com != arr[i]) return false;
    }
    return true;
}

int findHigh(int arr[], int size){
    int max{};
    for (int i=0; i<size; ++i){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    std::string s{};
    std::cin >> s;
    int arr[26]{};

    for (char c : s){
        arr[c - 'a']++;
    }

    for (int i=0; i<26; ++i){
        std::cout << arr[i] << " ";
    } std::cout << "\n";

    if (hasEqualFreq(arr, 26)){
        for (int i=0; i<26; ++i){
            if (arr[i]) std::cout << static_cast<char>(i+'a') << arr[i];
        }
    }else{
        for (int i=0; i<26; ++i){
            if (arr[i]){
                int max { findHigh(arr, 26) };
                std::cout << static_cast<char>(i+'a') << max;
                arr[i] = 0;
            }
        }
    }

    return 0;
}