#include<stdio.h>
int main()
{
    float a[20];
    int n , element, location ;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf( "%d number=",i+1);
        scanf("%f",&a[i]);
    }
    printf("enter the element to be serched:");
    scanf("%d",&element);
for(int i=0;i<n;i++)
{
    if(element== a[i])
    printf("number found at the location%d",i+1);
}
return 0;
}