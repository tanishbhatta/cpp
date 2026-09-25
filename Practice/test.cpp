#include <iostream>
#include <vector>

std::vector<int> multiply(std::vector<int>& big, int x){
    int carry = 0;
    for (int i = 0; i < big.size(); i++) {
        int val = big[i] * x + carry;
        big[i] = val % 10;
        carry = val / 10;
    }
    while (carry) {
        big.push_back(carry % 10);
        carry /= 10;
    }
    return big;
}

int main(){
    std::vector<int> big = {4};
}