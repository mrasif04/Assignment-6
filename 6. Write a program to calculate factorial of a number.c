#include<stdio.h>
int main()
{
    int i=1,fact=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>=i)
    {
        fact=fact*i;
        i++;
}    

 printf(" factorial is %d",fact);
}
