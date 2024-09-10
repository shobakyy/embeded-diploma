#include<stdio.h>
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if ((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
    printf("%c is alphabet",c);
    else
    printf("%C is not alphabet",c);

    return 0;
}
