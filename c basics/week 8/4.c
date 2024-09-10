#include<stdio.h>
void main()
{
    int n ,i;
    int fess[20];
    int *ptr;
    printf("Input the number of elements to store in the array (max 20) : ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array :",n);
    ptr=&fess[0];
    for(i=0;i<n;i++)
    {
        printf("element(%d)=",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&fess[n-1];

    for(i=n;i>0;i--){
        printf("elemens%d=",i);
        printf("%d\n",*ptr);
        ptr--;
        
    }
  
}

   
