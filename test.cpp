#include <iostream>
#include <string>
#include <cctype>


int main() {
    std::string check = "test@hello";
    std::cout << check.find('@');
    return 0;
}