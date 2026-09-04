 << "'\n";
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