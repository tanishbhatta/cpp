#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string wrd{};
    std::getline(std::cin >> std::ws, wrd);
    int lenArr[26];

    for (int i = 0; i < static_cast<int>(wrd.length()); ++i){
        int slotNum = wrd[i] - 'a';
        lenArr[slotNum] += 1;
    }

    return 0;
}