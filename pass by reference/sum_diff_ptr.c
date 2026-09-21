#include<stdio.h>

void sum_diff(int *x,int *y);

int main()
{
    int n,m,sum = 0,diff = 0;
    
    printf("Enter n and m: ");
    scanf("%d %d",&n,&m);
    
    sum_diff(&n,&m);
  
    return 0;
}

void sum_diff(int *x,int *y){
    int sum = *x + *y;
    int diff = *x - *y;  
    printf("Sum= %d\n",sum);
    printf("diff = %d\n",diff);
}
