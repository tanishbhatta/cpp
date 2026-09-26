#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s{}; // Upper AND Lower Mixed
    std::cin >> s;
    std::string cs{}; 
    
    for (char c : s){
        if (std::islower(c)) cs += std::toupper(c);
        else cs += std::tolower(c);
    }

    std::cout << "\nOld String: " << s << std::endl;
    std::cout << "New String: " << cs << std::endl;

    


    return 0;
}