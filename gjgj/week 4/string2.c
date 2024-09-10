#include<stdio.h>
int main()
{
    int l=0;
    char c[100] ;
    printf("enter a string:");
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    {
l+=1;
    }
    printf("length of string=%d",l);
    return 0;
}