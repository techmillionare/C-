#include<stdio.h>

int main(){
    int n,table;
    printf("enter number:");
    scanf("%d",&n);

    for(int i =1; i<=10; i++){
        table = n*i;
    printf("%d\n" , table);
    }
    return 0;
    }