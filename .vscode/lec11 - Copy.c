#include<stdio.h>


int main(){
    char ch;
    printf("enter characters");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z'){
        printf("lower case");
    }else if(ch>='a' && ch<='b'){
        printf("upper case");
    }else{
        printf("not english");
    }
    return 0;

}