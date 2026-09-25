#include <iostream>

int main() {
    std::string word;
    std::cin >> word;

    for (char &       w : word){
        w = w - 32;
    }
    std::string asciiWord = word;
    
    for (char &w : word){
        w = std::tolower(w);
    }

    for (char &w : word){
        w = std::toupper(w);
    }
    std::string cctypeWord = word;

    std::cout << asciiWord << "\n";
    std::cout << cctypeWord << "\n";
    return 0;
}