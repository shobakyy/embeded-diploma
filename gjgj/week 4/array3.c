#include<stdio.h>
int main()
{
    float a[10][10],trans[10][10];
    int r , c ;
    printf("enter the rows and coulms of matrix");
    scanf ("%d %d",&r,&c);
    printf ("enter the elemnts of the matrix\n");
        for(int i=0;i<r;i++)
    for(int j =0;j<c;j++)
    {
        printf("enter a %d%d\t", i+1,j+1);
scanf("%f",&a[i][j]);

    }
        for(int i=0;i<r;i++)
    for(int j =0;j<c;j++)
    {
       trans[i][j]=a[j][i];
    }
       for(int i=0;i<r;i++)
       {
    for(int j =0;j<c;j++)   {    
printf("%f\t",trans [i][j]);  }
    printf("\n"); }
    return 0;
    }