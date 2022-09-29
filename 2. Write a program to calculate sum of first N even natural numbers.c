#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>=i)
    {
    printf("%d\n",i*2);
   sum+=i*2;
  
    i++;
}    

 printf("Sum of even number is %d",sum);
}
