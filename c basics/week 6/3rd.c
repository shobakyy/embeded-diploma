#include<stdio.h>
struct complex{
    float real;
    float imag;
    float sum;
}complex;
struct complex addcomplex (struct complex n1,struct complex n2);
int main()
{
   struct  complex n1,n2,sum;
printf("enter the first  real and imag:\n");\
scanf("%f%f",&n1.real,&n1.imag);
printf("enter the second  real and imag:\n");
scanf("%f%f",&n2.real,&n2.imag);
sum= addcomplex(n1,n2);
printf("sum=%f+%f",sum.real,sum.imag);
return 0;
}
struct complex addcomplex(struct complex n1,struct complex n2){
    struct complex sum;
    sum.real=n1.real+n2.real;
    sum.imag=n1.imag+n2.imag;
    return (sum);
}