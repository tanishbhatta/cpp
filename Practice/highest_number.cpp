#include <cstdio>

int main(){
    int a, b, c, high = 0;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c){
        printf("The numbers are equal.");
        return 0;
    }

    if (a >= b){
        if (a > c) high = a;
        else high = c;
    }else {
        if (b > c) high = b;
        else high = c;
    }

    printf("%d is the highest number.", high);
    return 0;
}

/*
Test Cases:
• 5 5 5
• 10 10 3
• 3 10 10
• 10 3 10
• 9 5 2
• 5 9 2
• 2 5 9
• -10 -5 -210 
• -5 0 5
• -2147483648 0 2147483647
• 10 hello 5

*/