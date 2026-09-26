#include <iostream>
#include <string>

int main() {
    std::string s{};
    std::cin >> s;
    char fs { s[0] };
    int len { static_cast<int>(s.length()) };
    int count {};

    for (int i = 0; i < len; ++i){
        if (s[i] == fs) count++;
        else{
            std::cout << s[i-1] << count;
            count = 0;
            fs = s[i];
            count++;
        }
        if (i == len-1){
            std::cout << s[i] << count;
        }
        
    }

    return 0;
}