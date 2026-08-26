#include<stdio.h>
int main()
{
    int n;
    
    int digit,sum = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    int temp = n;
    while(n!=0){
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    
    printf("Sum =%d\n",sum);
    
    if (temp % sum == 0)
    printf("Niven number\n");
    else
    printf("Not a niven number");
    
    return 0;
}