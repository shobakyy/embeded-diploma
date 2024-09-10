#include<stdio.h>
int main()
{
    char alph[27];
    int i ;
  char *ptr;
     printf("all the alphapet is :\n");
     ptr=alph;
     for(i=0;i<27;i++) 
     {
  *ptr=i+'A';
        ptr++;
     }
       ptr=alph;
     for(i=0;i<27;i++){
        printf("%c\t",*ptr);
        ptr++;
     }
     printf("\n");
     return 0;
}