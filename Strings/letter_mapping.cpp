#include <iostream>
#include <string>

int main() {
    std::string w1{}, w2{};
    std::cin >> w1 >> w2;

    int arr[26]{};

    int len1 { static_cast<int>(w1.length()) },
    len2 { static_cast<int>(w2.length())};

    if (len1 != len2){
        std::cout << "NO" << std::endl;
        return 0;
    }

    for (char c : w1){
        arr[c - 'a']++;
    }



    return 0;
}