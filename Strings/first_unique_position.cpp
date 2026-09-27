#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    int arr[26]{}, cPos {};
    bool isUnique{};

    for (char c : s){
        arr[c - 'a']++;
    }

    for (char c : s){
        cPos++;
        if (arr[c - 'a'] == 1){ 
            isUnique = true;
            break;
        }
    }

    if (!isUnique) std::cout << -1 << std::endl;
    else std::cout << cPos <<std::endl;

    return 0;
}