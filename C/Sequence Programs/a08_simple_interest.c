#include <stdio.h>

int main(){
    float p, t, r, si, na;
    printf("Enter the principal amount: "); scanf("%f", &p);
    printf("Enter the time period: "); scanf("%f", &t);
    printf("Enter the rate of interest: "), scanf("%f", &r);
    si = (p * t * r) / 100;
    na = p + si;
    printf("Simple Interest: %g", si);
    printf("\nNet Amount: %g", na);
    return 0;
}