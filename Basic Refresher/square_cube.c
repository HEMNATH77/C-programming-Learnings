#include<stdio.h>
int main()
{
    int a,sqr,cube;
    printf("Enter the values of a \n");
    scanf("%d",&a);
    
    sqr = a * a;

    cube = a * a * a;
    printf("sqr = %d\n",sqr);
    printf("cube = %d\n",cube);
    return 0;
}