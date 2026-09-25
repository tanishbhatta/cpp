#include <iostream>
#include <string>
#include <cctype>

int main() {    
    std::string w{};
    std::getline(std::cin >> std::ws, w);
    char alMax = w[0];
    int pos = 1;

    for (int i = 1; i < static_cast<int>(w.length()); ++i){
        if (w[i] > alMax){
            alMax = w[i];
            pos = i+1;
        }
    }

    std::cout << alMax << " " << pos << std::endl;

    return 0;
}