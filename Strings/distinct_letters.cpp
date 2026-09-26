#include <iostream>
#include <string>

int main() {
    std::string w{};
    std::cin >> w;
    int arr[26]{}, count{};

    for (char c : w){
        arr[c - 'a']++;
    }

    for (int i = 0; i<26; i++){
        if (arr[i] != 0) count++;
    }

    std::cout << count << std::endl;
    
    return 0;
}