#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int flag = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit == 0){
            flag = 1;
            break;
        }
        n = n/10;
    }
    if(flag == 1)
    printf("Duck");
    else
    printf("Not duck");
}
