#include<stdio.h>
int main()
{
    int n;
    float num [100] , averge=0.0, sum=0.0 , number ;
     printf("enter the number of the data betwwen 0 to 100:");
     scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
        if(n>100||n<0)
        {
        printf("ERORRRRR\n");
           printf("enter the number of the data betwwen 0 to 100:\n");
     scanf("%d",&n);
        }
        
        
        printf("%d number\t",i+1 );
        scanf("%f",& num[i]);
        sum+=num[i];
        
    }
    printf("averge is %f",averge=sum/n);
    return 0;
}
        