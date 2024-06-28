#include<stdio.h>
#include<math.h>

struct term{
    int coeff;
    int exp;
};

struct poly{
    int n;
    struct term *A;
};

void createpoly(struct poly p){
    printf("enter number of non zero term:");
    scanf("%d",&P.n);
    printf("enter coefficient and exponent");
    for(int i=0;i<p.n;i++){
        printf("term is %d",i+1);
        scanf("%d%d",&p.A[i].coeff,&p.A[i].exp);
    }
}

int main(){
    int x;
    int sum=0;
    for(int i=0;i<p.n;i++){
        sum+=p.A[i].coeff*pow(x,p.A[i].exp);
    }
    printf("%d",sum);
}
