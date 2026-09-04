#include <iostream>
#include <variant>

double getNum1()
{
    double num1{};
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    return num1;
};

double getNum2()
{
    double num2{};
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    return num2;
};

char getOpr()
{
    char opr{};
    std::cout << "Enter the operator ( + , - , * , /): ";
    std::cin >> opr;
    return opr;
};

std::variant<bool, double> calc(double num1, char opr, double num2)
{
    switch (opr)
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) return false;
            return num1 / num2;
        default:
            std::cerr << "Error: Invalid operator '" << opr << "'\n";
            return 0.0;
    };
}

void printResult(double num1, char opr, double num2, double ans)
{
    std::cout << num1 << " " << opr << " " << num2 << " is " << ans << std::endl;
}


int main()
{
    double num1 = getNum1();
    char opr = getOpr();
    double num2 = getNum2();

    auto answ = calc(num1, opr, num2);
    if (std::holds_alternative<bool>(answ)){
        std::cerr << "Can't divide a number by 0." << std::endl;
    }else{
        double validAns = std::get<double>(answ);
        printResult(num1, opr, num2, validAns);
    }
}