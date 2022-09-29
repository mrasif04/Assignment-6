#include<stdio.h>
int main()
{
    int n ,c=0, d ,nn;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        c=c*10 + d;
        n=n/10;
        
    }
    printf("%d",c);
}