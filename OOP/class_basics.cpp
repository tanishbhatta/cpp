#include <iostream>
#include <string>

class Students
{
    private:
    std::string name;
    int age;
    double gpa;

    public:
    Students(std::string s, int a, double g)
    {
        name = s;
        age = a;
        gpa = g;
    };

    void print()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    };
};

int main() {
    Students stud("Aarush Bhatta", 28, 3.96);

    stud.print();
    return 0;
}