// Define a struct Student with three members: std::string name, int age, double gpa
// In main(), create one Student variable, fill in its three fields directly (s.name = "...", etc.)
// Print all three fields in one line
// Then create a second Student in an array of 3 (Student students[3]), fill all 3 using a loop that prompts the user for each field, then print all 3 in a loop
#include <iostream>
#include <string>

struct Student
{
    std::string name{};
    int age{};
    double gpa{};
};

int main() {
    Student s1 {"Tanish Bhatta", 45, 3.89};

    std::cout << "Name: " << s1.name << ", Age: " << s1.age << ", GPA: " << s1.gpa << "\n\n";

    Student stdarray[3];
    for (Student &s : stdarray)
    {
        std::cout << "Enter the name: ";
        std::getline(std::cin, s.name);

        std::cout << "Enter the age: ";
        std::cin >> s.age;

        std::cout << "Enter the gpa: ";
        std::cin >> s.gpa;

        std::cin.ignore();
        std::cout << "\n";
    }

    for (Student &p : stdarray)
    {
        std::cout << "Name: " << p.name << std::endl;
        std::cout << "Age: " << p.age << std::endl;
        std::cout << "GPA: " << p.gpa << std::endl;
        std::cout << "\n";
    }

    return 0;
}