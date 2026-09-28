#include <iostream>
#include <string>

int maxInArr(int arr[], int size){
    int max{};
    for (int i=0; i<size; ++i){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    std::string s{};
    std::cin >> s;
    int alphaArr[26]{};

    for (char c : s){
        alphaArr[c - 'a']++;
    }

    int maxIter = maxInArr(alphaArr, 26);
    int maxVal { maxIter };
    
    for (int i = 0; i < maxIter; ++i){
        for (int i = 0; i < 26; ++i){
            if (alphaArr[i] == maxVal) std::cout << static_cast<char>(i + 'a') << maxVal;
        }
        maxVal--;
    }
    

    return 0;
}