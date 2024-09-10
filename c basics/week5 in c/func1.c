#include<stdio.h>
int check_prime (int num);
int main()
{
int first,second,i,flag,num;
printf("enter the two numbers:");
scanf("%d%d",&first,&second);
printf("prime numbers betwwen%d and %d",first,second);
for(i=(first+1);first<second;i++)
{
flag=check_prime(i);
if(flag==0)
printf("%d",i);
}
return 0;
}
int check_prime (int i)
{
    int j,flag=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
flag=1;
break;
        }
    }
    return flag;
}
