#include<stdio.h>
int main()
{
    int n;
    int digit,sum = 0,product = 1;
    printf("Enter n: ");
    scanf("%d",&n);
    
    while(n!=0){
        digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        
        n = n/10;
    }
    printf("Sum =%d\n",sum);
    printf("Product =%d\n",product);
    
    if(sum == product)
    printf("It's a Spy number\n");
    
    else
    printf("Not a spy number\n");
    
    return 0;
}