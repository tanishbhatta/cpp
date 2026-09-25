#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

int trailZero(long long num)
{
    long long fac = 1;
    for (int i=num; i>=1; i--){
        fac *= i;
    }
    return fac;
}

int main()
{
    boost::multiprecision::cpp_int num{};
    std::cin >> num;
    std::cout << "Factorial: " <<trailZero(num) << std::endl;
    return 0;
}