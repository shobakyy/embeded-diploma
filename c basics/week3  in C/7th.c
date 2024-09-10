#include<stdio.h>
int main()
{
    int num;
    printf("inter the integer:");
    scanf("%d",&num);
    if ((num%2)==0)
    {
     printf("num %d is even",num);
        
    }
    else
    {
        printf("num %d is odd",num);
    }
    return 0;

}