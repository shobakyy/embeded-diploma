#include<stdio.h>
int main()
{
    int n ,i=1 ,sum=0 ;
    printf("enter the number:");
    scanf("%d",&n);
    while (i<=n)
    {
     
        sum+=i;
        i++;
    }
    printf("sum is %d",sum);
    return 0;
    
}