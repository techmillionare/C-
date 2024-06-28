#include<stdio.h>

int main()
{
    int A[10],n=5,key;
    printf("enter no.:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&i);
    }
      printf("enter key:");
          scanf("%d",&key);
          for(int i=0;i<n;i++)
          {
            if(key==A[i])
            {
                printf("key found at %d",i);
                return 0;
            }
          }
            printf("key not found");
          
}
