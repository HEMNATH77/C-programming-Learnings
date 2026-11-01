#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int temp = num;

    int  fact = 1,sum = 0;

    while(num != 0){
        int digit = num % 10;
        int fact = 1;
        for(int i = 1;i<=digit;i++){
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }
    printf("sum = %d\n",sum);

    if(temp == sum)
    printf("Strong number\n");
    else
    printf("Not a strong number\n");
}
