#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    avg = (a+b+c)/3;

    printf("avg = %f\n",avg);
    return 0;
}