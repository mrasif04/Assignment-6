#include<stdio.h>
int main()
{
    int i=1,count=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count=count+1;
        i++;
}    

 printf("Total digit in given number is  %d",count);
}
