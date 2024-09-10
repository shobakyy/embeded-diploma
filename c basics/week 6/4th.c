#include<stdio.h>
#include<stdlib.h>
struct students{
    char name[50];
    int roll;
    float marks;
} ;
int main()
{
    struct students s[10];
    printf("enter the information of studemts\n");
    for(int i=1;i<=10;i++)
    {
        printf("information to %d student\n",i);
printf("enter name:");
    scanf("%s",& s[i].name);
    printf("enter roll number");
    scanf("%d", & s[i].roll);
    printf("enter marks");
    scanf("%f",&s[i].marks);
    }
    
    printf("displaying information:");
    for(int i=1;i<=10;i++){
    printf("name :%s\n",s[i].name);
 printf("roll :%d\n",s[i].roll);
  printf("marks :%f\n",s[i].marks);
    }
  return 0;

}