#include<stdio.h>
int main()
{
    int arr[10],averge=1,sum=0;
    printf("enter the 10 entegrs:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",arr[i]);
        sum+=arr[i];
    }
    averge=sum/10;
    printf("averge =%d",averge);
    return 0;
}