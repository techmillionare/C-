#include<stdio.h>

int main(){
    int a , b , c ,x;
    printf("enter a");
    scanf("%d" , &a);
    printf("enter b");
    scanf("%d", &b);
    printf("enter c");
    scanf("%d", &c);

     x = (a+b+c)/3;
    printf("average = %d", x);
    return 0;
}    
