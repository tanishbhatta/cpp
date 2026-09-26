#include <iostream>
#include <string>
#include <cctype>


int main() {
    std::string check = "test@hello";
    std::cout << check.substr(5, 5);
    return 0;
}