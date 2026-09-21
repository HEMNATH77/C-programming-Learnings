#include<stdio.h>

void swap(int *x,int *y,int *z);

int main()
{
    int a,b,c;
    printf("Enter a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    
    swap(&a,&b,&c);
    
    return 0;
}

void swap(int *x,int *y,int *z){
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
    
    
    
    printf("a = %d\n",*x);
    printf("b = %d\n",*y);
    printf("c = %d\n",*z);
}