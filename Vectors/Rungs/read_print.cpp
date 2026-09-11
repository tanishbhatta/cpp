#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int value;
    std::vector<int> vec;
    for (int v=0; v<n; v++)
    {
        std::cin >> value;
        vec.push_back(value);
    }
    for (size_t x=0; x<vec.size(); x++)
    {
        if(x!=vec.size()-1) std::cout << vec.at(x) << " ";
        else std::cout << vec.at(x);
    }
    return 0;
}