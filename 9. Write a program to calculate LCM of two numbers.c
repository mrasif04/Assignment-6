#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter first no: ");
    scanf("%d",&m);
    printf("Enter second no: ");
    scanf("%d",&n);
        {
            for(i=1;i<=m*n;i++)
       {
           if(i%m==0 && i%n==0)
           {
               printf("%d\n",i); 
           return 0;
           }

       } 
        }
}