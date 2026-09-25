#include <bits/stdc++.h>
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
    int num;
    std::cout << "Factorial: " <<trailZero(num) << std::endl;
    return 0;
}