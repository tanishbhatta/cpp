#include <stdio.h>

int main(){
    float len, bre, area, peri;
    printf("Enter the length: "); scanf("%f", &len);
    printf("Enter the breath: "); scanf("%f", &bre);
    area = len * bre;
    peri = 2 * (len + bre);
    printf("Area: %g", area);
    printf("\nPerimeter: %g", peri);
    return 0;
}