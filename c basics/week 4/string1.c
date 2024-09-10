#include<stdio.h>
int main()
{
    char c[100] ,f;
    int n=0;
    printf("enter a string:");
    gets(c);
    printf("enter a letter to find a frequancy:");
    scanf("%c",&f);
    for(int i=0;c[i]!='\0';i++)
    {
        if(f==c[i])
n=n+1;
    }
    printf("frequancy of %c is :%d",f,n);
    return 0;
}