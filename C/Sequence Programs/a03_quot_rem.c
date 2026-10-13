#include <stdio.h>

int main(){
    int a, b, rem, quo;
    scanf("%d%d", &a, &b);
    quo = a / b;
    rem = a % b;
    printf("Quotient: %d\n", quo);
    printf("Remainder: %d", rem);
    return 0;
}