#include<stdio.h>
int main()
{
    float a[20];
    int n , element, location;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf( "%d number=",i+1);
        scanf("%f",&a[i]);
    }
    printf("enter the element to be enserted:");
    scanf("%d",&element);
     printf("enter the location:");
    scanf("%d",&location);   
a[location - 1] = element;

     for(int i=0;i<n;i++) 
     {
        printf( "%.2f\t",a[i]);
     }
    return 0;
}