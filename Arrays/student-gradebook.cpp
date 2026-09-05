// Project: Student Gradebook (Multi-Subject)
// Spec:
// Ask how many students (validate: must be 1–30, re-prompt on bad input — that's your cin loop practice)
// Ask how many subjects per student (validate similarly, cap at 1–10)
// Store scores in a 2D array double scores[30][10]
// Store student names in std::string names[30]
// For each student: enter name, then enter a score per subject (validate each score 0–100, re-prompt if out of range)
// Print a table: each row = student, columns = subject scores + row average
// Function signatures — note the const usage, that's deliberate:
// cpp
//     void printGradebook(const std::string names[], const double scores[][10], int numStudents, int numSubjects);
//     double studentAverage(const double studentScores[], int numSubjects);
// Constraints on you:
// Every function that only reads an array (doesn't modify it) must take it as const
// No char[] for names — std::string only
// Bad input (letters typed where a number expected) must not crash or infinite-loop — this is the hard part, think about cin.fail()
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    while (true)
    {
        int stdNum;
        std::cout << "How many students? (Between 1-30): ";
        std::cin >> stdNum;
        if (std::cin.fail()){
            std::cerr << "Error: input must be a number." << "\n";
            std::cin.clear();
            ignoreLine();
            continue;
        }
        std::cout << "The input value we got is " << stdNum << std::endl;
        ignoreLine();

        if (1 > stdNum || stdNum > 30){
            std::cerr << "Invalid: input should be between 1 and 30.\n" << std::endl;
        }else break;
    }
    while (true)
    {
        int subNum;
        std::cout << "\nHow many students? (Between 1-10): ";
        std::cin >> subNum;

        if (std::cin.fail()){
            std::cerr << "Error: input must be a number." << "\n";
            std::cin.clear();
            ignoreLine();
            continue;
        };
        std::cout << "The input value we got is " << subNum << std::endl;
        ignoreLine();

        if (1 > subNum || subNum > 10){
            std::cout << "Invalid: input should be between 1 and 10.\n" << std::endl;
        }else break;
    }

    double scores[30][20];
};