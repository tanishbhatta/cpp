#include <iostream>
#include <string>
#include <cctype>


int main() {
    std::string name = "JEBISHA";
    
    for (char &i : name){
        i = std::tolower(i);
    }

    std::cout << name;
    return 0;
}