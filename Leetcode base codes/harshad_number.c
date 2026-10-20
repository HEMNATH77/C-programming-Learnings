#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int temp = n;
    int sum = 0;

    while(n!=0){
        int digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }

    if(temp % sum == 0)
    printf("%d\n",sum);
    else
    printf("-1\n");
}
