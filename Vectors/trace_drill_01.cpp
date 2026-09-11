// Four things, in this order, on paper:

// Trace table. One row per loop iteration: left, right, count, and which branch fired. Every iteration, no skipping.
// Predicted output. One number, committed before you run anything.
// What does this function compute? One sentence, in plain words, no reference to the variable names.
// The invariant. One sentence that is true at the top of every iteration of the while.

// Then run it. If your number was wrong, don't fix your understanding by reading the code again — find the exact row in your trace table where you diverged from reality, and log that row in your stall file.
#include <iostream>
#include <vector>

int puzzle(std::vector<int>& v) {
    int left = 0;
    int right = static_cast<int>(v.size()) - 1;
    int count = 0;
    while (left < right) {
        if (v[left] + v[right] > 10) {
            right--;
        } else {
            count += right - left;
            left++;
        }
    }
    return count;
}

int main() {
    std::vector<int> a = {1, 2, 4, 5, 9};
    std::cout << puzzle(a) << "\n";
    return 0;
}