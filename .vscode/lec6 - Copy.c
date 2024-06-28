#include<stdio.h>

int  main() {
    //even = 0
    //odd = 1
    int a;
    printf("enter a number");
    scanf("%d", &a );
    
    printf("%d", a % 2 == 0);
    return 0;
}