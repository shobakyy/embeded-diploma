#include<stdio.h>
#include<stdlib.h>
struct students{
    char name[50];
    int roll;
    float marks;
} ;
int main()
{
    struct students s;
    printf("enter the information of studemts\n");
    printf("enter name:");
    scanf("%s",&s.name);
    printf("enter roll number");
    scanf("%d", & s.roll);
    printf("enter marks");
    scanf("%f",&s.marks);
    printf("displaying information:");
    printf("name :%s\n",s.name);
 printf("roll :%d\n",s.roll);
  printf("marks :%f\n",s.marks);
  return 0;

}