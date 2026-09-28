#include <iostream>
#include <string>

int main() {
    std::string w{}, tw{};
    std::cin >> w;
    std::cin >> tw;
    int arr[26]{};
    bool canMake { true };

    for (char c : w){
        arr[c-'a']++;
    }
    
    for (char c : tw){
        arr[c - 'a']--;
    }

    for (int i=0; i<26; ++i){
        if (arr[i] < 0 ) canMake = false;
    }

    if (canMake) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    return 0;
}
