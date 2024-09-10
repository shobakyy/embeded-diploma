#include<stdio.h>
#define pi 3.14 
#define area(x) (pi*(x)*(x))
int main()
{
    int r;
    float area;
    printf("enter the radius:");
    scanf("%d",&r);
    area=area (r);
    printf("area=%.2f",area);
    return 0;
}