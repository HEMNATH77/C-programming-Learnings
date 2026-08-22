#include<stdio.h>
int main()
{
    int i;
    int n;
    int prod = 1;

    printf("Enter n times: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n ; i++){
        prod = prod * i;
    }
    
    printf("product = %d\n",prod);
    return 0;
    
    
}