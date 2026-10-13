#include <stdio.h>

int main(){
    float c, f;
    printf("Enter the temperature in centigrade: "); scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("Fahrenheit: %g", f);
    return 0;
}