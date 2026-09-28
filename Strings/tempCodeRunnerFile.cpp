#include <iostream>
#include <string>

int maxInArr(int arr[], int size){
    int max{};
    for (int i=0; i<size; ++i){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int getCharFromArr(int arr[], int size, int value){
    int val { value };
    for (int i = 0; i<size; ++i){
        if (arr[i] == val) return i + 'a';
    }
    return 0;
}

int main() {
    std::string s{};
    std::cin >> s;
    int alphaArr[26]{};

    for (char c : s){
        alphaArr[c - 'a']++;
    }

    int maxIter = maxInArr(alphaArr, 26);
    int maxNum = maxIter;

    for (int i = 0; i < maxIter; ++i){
        int charVal = getCharFromArr(alphaArr, 26, maxNum);
        if (charVal) std::cout << static_cast<char>(charVal) << maxNum;
        alphaArr[charVal - 'a'] = 0;
    }
    

    return 0;
}