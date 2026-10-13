#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main() {
    std::unordered_map<char, int> umap;
    std::string s{};
    std::cin >> s;

    for (int i = 0; i < (static_cast<int>(s.length())); ++i){
        umap[s[i]] += 1;
    }

    for (int i = 0; i < (static_cast<int>(s.length())); ++i){
        if (umap[s[i]] == 1){
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
    return 0;
}