#include<stdio.h>
int main()
{ 
      int num ;
    printf("inter the number:");
    scanf("%d",&num);

       if(num<=0)
    {
        if (num==0)
        
            printf("number is zero");
        
        else 
            printf("number is negtive");
    }
        else 
            printf("number is postive");
    return 0;

}