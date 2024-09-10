#include<stdio.h>
struct distnace{
    int feet;
    float inch;
}d1,d2,sum;
int main()
{

printf("enter the distance of first distance\n");
printf("enter feet:");
scanf("%d",&d1.feet);
printf("enter inch:");
scanf("%f",&d1.inch);
printf("enter the distance of second distance\n");
printf("enter feet:");
scanf("%d",&d2.feet);
printf("enter inch:");
scanf("%f",&d2.inch);
sum.feet=d1.feet+d2.feet;
sum.inch=d2.inch+d2.inch;
if(sum.inch>12){
    sum.inch=sum.inch-12;
    sum.feet++;
}
    printf("distance= %d.(%f)",sum.feet,sum.inch);
    return 0;
}

