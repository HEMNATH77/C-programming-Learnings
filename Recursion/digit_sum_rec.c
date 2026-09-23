#include<stdio.h>

int func(int n){
    static int sum = 0;

    if(n>0){
        int digit = n % 10;
        sum = sum + digit;
        func(n/10);
    }
    return sum;
}

int main()
{
    int n ;
    printf("Enter n: ");
    scanf("%d",&n);
    int res = func(n);
    printf("sum = %d\n",res);
    return 0;
}