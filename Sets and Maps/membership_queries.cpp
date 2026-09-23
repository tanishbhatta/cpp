/*
You are given an array of n integers, then q queries. Each query is a single integer x. For each query, print YES if x appears anywhere in the array, otherwise NO, each on its own line.

Input: first line n q, second line the n integers, then q lines each containing one x.
Output: q lines.

Constraints: 1 ≤ n, q ≤ 2·10^5, -10^9 ≤ a[i], x ≤ 10^9
*/
#include <iostream>
#include <set>

int main()
{
    //initializing the required variables
    int n, q, x;
    std::set<int> s;

    //give the number of times the set inserts value
    std::cout << "How many integers?: ";
    std::cin >> n;

    //inserting the queries in the set
    for (int i=0; i<n; ++i)
    {
        std::cout << "Insert a value: ";
        std::cin >> q;
        s.insert(q);
    }

    //the value we want to check if the set carries
    std::cout << "Does __ appear?: ";
    std::cin >> x;
    
    //conditionals
    if (s.count(x) == 1) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}