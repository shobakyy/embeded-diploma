#include<stdio.h>
int main ()
{
    char c;
    float num1, num2, product;
    printf("inter the opretor + or - or * or /:");
    scanf("%c",&c);
    printf("inter two integers:");
    scanf("%f %f",&num1,&num2);
    switch (c)
    {
    case '+':
    printf("%.2f + %.2f =%.2f",num1,num2,num1+num2);
        break;
    case '-':
     printf("%.2f - %.2f =%.2f",num1,num2,num1-num2);
        break;
        case '*':
     printf("%.2f * %.2f =%.2f",num1,num2,num1*num2);
        break;
        case '/':
     printf("%.2f / %.2f =%.2f",num1,num2,num1/num2);
        break;

    
    default:
    printf("ERORR!!! opretor is not correct");
        break;
    }
    return 0;


}