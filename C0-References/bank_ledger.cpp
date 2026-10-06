#include <iostream>
#include <vector>

void printArr(const std::vector<int>& vec){
    for (int i = 0; i < (static_cast<int>(vec.size())); ++i){
        std::cout << vec[i] << " ";
    }
}

int sumCalc(const std::vector<int>& vec){
    int sumNum{};
    for (int i : vec){
        sumNum += i;
    }
    return sumNum;
}

void takeInArr(std::vector<int>& vec){
    for (int ino = 0; ino < (static_cast<int>(vec.size())); ++ino){
        int acc{};
        std::cin >> acc;
        vec[ino] = acc;
    }
}

std::vector<std::vector<int>> transactionIn(){
    int q{};
    std::cin >> q;
    std::vector<std::vector<int>> dataGroup(q);

    for (int i = 0; i < q; ++i){
        int a{}, b{}, x{};
        std::cin >> a >> b >> x;

        std::vector<int> toIn(3);
        toIn[0] = a;
        toIn[1] = b;
        toIn[2] = x;

        dataGroup[i] = toIn;
    }

    return dataGroup;
}

int processCalc(std::vector<int>& vec, std::vector<std::vector<int>>& data){
    int count{};
    for (int i = 0; i < (static_cast<int>(data.size())); ++i){
        if (vec[data[i][0] - 1] >= data[i][2]){
            vec[data[i][0] - 1] -= data[i][2];
            vec[data[i][1] - 1] += data[i][2];
        }else count++;
    }
    return count;
}


int main() {
    int n{};
    std::cin >> n;
    std::vector<int> vec(n);

    takeInArr(vec);
    std::vector<std::vector<int>> dataGroup { transactionIn() };
    int neg = processCalc(vec, dataGroup);

    printArr(vec);
    std::cout << "\n" << neg << std::endl;
    std::cout << sumCalc(vec) << std::endl;

    return 0;
}