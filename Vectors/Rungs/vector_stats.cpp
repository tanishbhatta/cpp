#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int, int, int> process(std::vector<int>& vec)
{
    if (vec.empty()) return {0, 0, 0, 0};
    int high = vec.at(0);
    int low = vec.at(0);
    int sum = 0;
    int even_count = 0;

    for (size_t i=0; i<vec.size(); i++)
    {
        int current = vec.at(i);
        if (current > high) high = current;
        if (current < low) low = current;
        if (current % 2 == 0) even_count++;
        sum += current;
    }
    return {high, low, sum, even_count};
}

int main() {
    int n;
    std::cin >> n;
    int val;
    std::vector<int> signal;
    for (int i=0; i<n; i++)
    {
        std::cin >> val;
        signal.push_back(val);
    }
    
    auto [high, low, sum, even] = process(signal);
    std::cout << high << std::endl;
    std::cout << low << std::endl;
    std::cout << sum << std::endl;
    std::cout << even << std::endl;
    return 0;
}