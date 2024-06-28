#include<stdio.h>

int main()
{
    int n;
    int A[n],l=0,key,mid,h=n-1;

    printf("enter number:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("enter key:");
    scanf("%d",&key);
   while(l<=h)
    {
       mid=(l+h)/2;
       if(key==A[mid]){
          printf("key found at %d",mid);
          return 0;
       }
       else if(key<A[mid]){
        l=mid-1;
       }
       else{
        l=mid+1;
       }
    }
    printf("key not found");
}