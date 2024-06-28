#include<stdio.h>

int main(){
    int n,i=1,sum=0;
    scanf("%d",&n);
       do{
        sum = sum + i;
        i++;
    }
    while(i<=n);

     printf("%d\n",sum);
     for(int i=n; i>=1;i--){
        printf("%d\n",i);
     }
    return 0;
}

