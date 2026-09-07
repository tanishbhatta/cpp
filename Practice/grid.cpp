#include <iostream>

int main() {
    int rows = 5;
    int columns = 10;

    for (int r=0; r<rows; r++)
    {
        for (int c=0; c<columns; c++)
        {
            std::cout << ".";
        };
        std::cout << "\n";
    };
    return 0;
}