#include <iostream>
#include <string>
#include <limits>

void ignoreLine(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int num{};
    int num2{};
    std::string opr{};

    std::cout << "Enter the first number: "; std::cin >> num;
    ignoreLine();
    std::cout << "Operator: "; std::cin >> opr;
    ignoreLine();
    std::cout << "Enter the second number: "; std::cin >> num2;
    ignoreLine();

    if (opr == "+") std::cout << "Sum is: " << num+num2 << std::endl;
    return 0;
}