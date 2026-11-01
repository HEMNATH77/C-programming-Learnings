#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int sq = num * num;

    printf("Square => %d\n",sq);

    int sum = 0;

    while(sq != 0){
        int digit = sq % 10;
        sum = sum + digit;
        sq = sq / 10;
    }

    printf("Sum => %d\n",sum);

    if(num == sum)
    printf("Neon Number\n");
    else
    printf("Not a neon number\n");
}
