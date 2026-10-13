#include <stdio.h>

int main(){
    int a, b, sum, diff, prod;
    scanf("%d%d", &a, &b);
    sum = a + b; diff = a - b; prod = a * b;
    printf("Sum: %d", sum);
    printf("\nDifference: %d", diff);
    printf("\nProduct: %d", prod);
    return 0;
}