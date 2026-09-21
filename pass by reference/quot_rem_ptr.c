#include<stdio.h>

void rem_quot(int *x,int *y);

int main()
{
    int n,m;
    printf("Enter n and m: ");
    scanf("%d %d",&n,&m);
    
    rem_quot(&n,&m);
    
    return 0;
}

void rem_quot(int *x,int *y){
    int rem = *x % *y;
    int quot = *x / *y;
    
    printf("remainder = %d\n",rem);
    printf("Quotient = %d\n",quot);
}