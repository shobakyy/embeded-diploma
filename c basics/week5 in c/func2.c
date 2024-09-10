#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("factoialof %d =%ld",n,factorial(n));
    return 0;
}
int factorial(int n)
{
int fact=1,sum=0;

    for(int i=1;i<=n;i++)
{
fact*=i;
}
return fact;
}