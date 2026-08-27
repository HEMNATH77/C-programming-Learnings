#include<stdio.h>
int main()
{
    int n;
    int digit,sum = 0;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    int square = n * n;
    printf("Square = %d\n",square);
    
    while(square!=0){
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }
    printf("sum_square = %d\n",sum);
    
    if(n == sum)
    printf("Neon Number\n");
    
    else
    printf("Not a neon number\n");
    return 0;
}