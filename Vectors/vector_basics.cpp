// Create a std::vector<int>
// push_back 5 numbers into it, one at a time
// Print all of them using a range-based for loop
// Then pop_back() once, print the current .size()
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    for (int val=0; val < vec.size(); val++)
    {
        std::cout << vec.at(val) << " ";
    }

    vec.pop_back();
    std::cout << "\n" << vec.size() << std::endl;

    return 0;
}