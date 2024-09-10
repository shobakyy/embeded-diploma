#include <stdio.h>
#include <string.h>
void reverse (char *str){
    int start=0;
    int end =strlen(str)-1;
    char temp;
    while (start<end)
    {
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
    }
}
int main()
{
    char str[100];
    printf("enter a string");
   scanf("%s",&str);
    printf("string before reversed is :%s\n",str);
    reverse (str);
printf("string after reversed is :%s",str);
return 0;
}