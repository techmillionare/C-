#include<stdio.h>

int main(){
    // if number is digit = 1
    // if anything else = 0
    int x;
    printf("enter the value ");
    scanf("%d", &x);
    printf("%d" , x>=0 && x<=9);

    return 0;
}