#include<stdio.h>
int main()
{
    int i=2,n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>i)
    {
     if(n%i==0)
     c++;
     
     i++;
    }
    if(c==0)
    printf("%d is Prime Number",n);
    else
    printf("%d is not Prime Number",n);
   
}
