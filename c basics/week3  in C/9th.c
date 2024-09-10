#include<stdio.h>
int main ()
{
    float x,y,z ;
    printf("inter the numbers:");
    scanf("%f %f %f",&x,&y,&z);
    if(x>=y)
    {
        if(x>=z)
        {
            printf("largest number is:%.2f",x);
        }
        else{
            printf("largest number is:%.2f",z);
        }
    }
    else if (y>=z)
    {
        printf("largest number is:%.2f",y);
    }
    else {
        printf("largest number is:%.2f",z);
    }
    return 0;

    }