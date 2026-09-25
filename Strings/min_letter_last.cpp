#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string w{};
    std::getline(std::cin >> std::ws, w);
    char loCh = w[0];
    int lo_pos = 1;

    for (int i = 1; i < static_cast<int>(w.length()); ++i){
        if (w[i] <= loCh){
            loCh = w[i];
            lo_pos = i + 1;
        }
    }

    std::cout << loCh << " " << lo_pos << std::endl;

    return 0;
}