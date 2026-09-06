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
#include <string>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void askInput(int student_num, int subject_num, std::string students_name[], double subject_marks[30][10])
{
    for (int i=0; i<student_num; i++)
    {
        std::string name;
        while (true)
        {
            std::cout << "\nEnter name for student " << i+1 << ": ";
            std::getline(std::cin, name);

            if (name.empty()){
                std::cout << "Please enter something." << std::endl;
                continue;
            }

            if (!std::cin){
                std::cerr << "Error: Please enter the name correctly." << std::endl;
                std::cin.clear();
                ignoreLine();
                continue;
            }
            break;
        }

        students_name[i] = name;

        for (int a=0; a<subject_num; a++)
        {
            double mark{};
            while (true)
            {
                std::cout << "Enter score for subject " << a+1 << ": ";
                std::cin >> mark;

                if (!std::cin){
                    std::cerr << "Error: Enter a valid number." << std::endl;
                    std::cin.clear();
                    ignoreLine();
                    continue;
                }

                if (mark < 0 || mark > 100){
                    std::cerr << "Invalid: Marks should be between 0 to 100.\n";
                }else {
                    ignoreLine();
                    break;
                }
            }

            subject_marks[i][a] = mark;
        }
    }
};

void printOutput(int student_num, int subject_num, const std::string students_name[], const double subject_marks[30][10])
{
    std::cout << "*****STUDENT GRADEBOOK*****" << std::endl;
    for (int i=0; i<student_num; i++)
    {
        double total = 0;
        std::cout << "\n#" << students_name[i] << ": ";
        for (int j=0; j<subject_num; j++)
        {
            if (j == subject_num-1) std::cout << subject_marks[i][j] << "\n";
            else std::cout << subject_marks[i][j] << ", ";
            total += subject_marks[i][j];
        }
        std::cout << "Total Marks Obtained:- " << total << "\n";
        std::cout << "Average Marks:- " << total/subject_num << "\n";

        std::cout << "\n";
    }
    std::cout << "***************************" << std::endl;
};

int main()
{
    int stdNum{};
    int subNum{};
    while (true)
    {
        std::cout << "How many students? (Between 1-30): ";
        std::cin >> stdNum;
        if (std::cin.fail()){
            std::cerr << "Error: input must be a number." << "\n";
            std::cin.clear();
            ignoreLine();
            continue;
        }
        ignoreLine();

        if (1 > stdNum || stdNum > 30){
            std::cerr << "Invalid: input should be between 1 and 30.\n" << std::endl;
        }else break;
    }
    while (true)
    {
        std::cout << "\nHow many subjects? (Between 1-10): ";
        std::cin >> subNum;

        if (std::cin.fail()){
            std::cerr << "Error: input must be a number." << "\n";
            std::cin.clear();
            ignoreLine();
            continue;
        };
        ignoreLine();

        if (1 > subNum || subNum > 10){
            std::cout << "Invalid: input should be between 1 and 10.\n" << std::endl;
        }else break;
    }

    double scores[30][10];
    std::string students[30];

    askInput(stdNum, subNum, students, scores);

    std::string userAsk{};
    std::cout << "Do you want to print the result?\n(1) Yes\n(2) No\n-> ";
    std::cin >> userAsk;

    if (userAsk == "1"){
        printOutput(stdNum, subNum, students, scores);
    }else{
        std::cout << "Thank you for filling the data. Bye!" << std::endl;
    }
};