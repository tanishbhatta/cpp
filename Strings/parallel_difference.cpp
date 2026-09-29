#include <iostream>
#include <string>

int main() {
    std::string s{}, w{};
    std::cin >> s >> w;
    int pos{};

    char arr[26]{};

    if (s == w){
        std::cout << "SAME" << std::endl;
        return 0;
    }

    for (int i = 0; i < (static_cast<int>(w.length())); ++i){
        arr[s[i] - 'a'] = w[i];
    }
    

    for (int i=0; i<26; ++i){
        if (arr[i] && arr[i] != i + 'a') std::cout << i+1 << " ";
    }

    // for (int i = 0; i<26; ++i){
    //     std::cout << arr[i] <<  "-";
    // }

    return 0;
}