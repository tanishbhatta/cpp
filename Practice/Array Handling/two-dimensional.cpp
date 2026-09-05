#include <iostream>

int main()
{
    char arr[3][3];
    arr[0][0] = 'A';
    arr[0][1] = 'B';
    arr[0][2] = 'C';
    arr[1][0] = 'D';
    arr[1][1] = 'E';
    arr[1][2] = 'F';
    arr[2][0] = 'G';
    arr[2][1] = 'H';
    arr[2][2] = 'I';

    for (int i=0; i<3 ; i++){
        for (int j=0; j<3; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}