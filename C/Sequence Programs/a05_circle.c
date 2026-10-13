#include <stdio.h>

int main(){
    float rad, area, circum, pi = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    area = pi * (rad * rad);
    circum = 2 * pi * rad;
    printf("Area: %g", area);
    printf("\nCircumference: %g", circum);
    return 0;
}