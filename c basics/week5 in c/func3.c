#include<stdio.h>
void read_array(int array[10],int n);
int small(int array[10],int n);
int main(){
  int n,num[10];
  printf("enter thenumber of array:");
  scanf("%d",&n);
  read_array(num,n);
  printf("the smallest element is %d",small(num,n));
return 0 ;
}
void read_array(int array[10],int n){
    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
int small(int array[10],int n)
{
    int small=array[1];
    for(int i =0;i<n;i++){
        if(small>array[i]){
            small=array[i];
        }
    }
    return small;
}