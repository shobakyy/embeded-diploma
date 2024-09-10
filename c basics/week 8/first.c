#include<stdio.h>
int main()
{
    int * ab;
    int m;
    m= 29;
    printf("value of m =%d\n",m);
       printf("addres of m =%p\n",&m);
       ab=&m;
         printf("value of ab =%d\n",*ab);
       printf("addres of ab =%p\n",ab);
       m=34;
        printf("value of ab =%d\n",*ab);
       printf("addres of ab =%p\n",ab);
       *ab=7;
        printf("value of m =%d\n",m);
       printf("addres of m =%p\n",&m);
       return 0;
}