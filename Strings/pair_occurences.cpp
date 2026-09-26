#include <iostream>
#include <string>

int main() {
    std::string w{}, p{};
    std::cin >> w;
    std::cin >> p;
    int count {}, len { static_cast<int>(w.length()) };

    for (int i=0; i<len; ++i){
        if (i != len-1 && w[i] == p[0] && w[i+1] == p[1]) count++;
    }

    std::cout << count << std::endl;

    return 0;
}