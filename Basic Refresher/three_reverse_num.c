#include<stdio.h>
int main()
{
    int a;
    int rev1,rev2,rev3,rev ;
    
    scanf("%d",&a);
    rev1 = (a % 10)* 100;
    rev2 = (a /10) % 10 * 10;
    rev3 = (a/100);
    
    //printf("rev1 = %d",rev1);
    //printf("rev2 = %d",rev2);
    //printf("rev3 = %d",rev3);
    rev = rev1 + rev2 + rev3;

    printf("reverse = %d\n",rev);

    return 0;
    
}