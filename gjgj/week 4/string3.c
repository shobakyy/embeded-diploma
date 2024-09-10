#include<stdio.h>>
#include<string.h>
int main()
{
int i,j;
    char c[100] , temp;
    printf("enter a string:");
    gets(c);
    i=0;
j=strlen(c)-1;
while(i<j)
{
    temp=c[i];
    c[i]=c[j];
    c[j]=temp;
    i++;
    j--;
}
printf("reverse string is: %s",c);
return 0;
}