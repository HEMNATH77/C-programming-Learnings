#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int flag = 0;
    
    while(num != 1){
    int sum = 0;
    
    while(num != 0){
        int digit = num % 10;

        int square = digit * digit;

        sum = sum + square;

        num = num / 10;

        //printf("square %d\n",square);
    }
    num = sum;
    printf("Sum => %d\n",sum); 
    }
    if(num == 1)
    printf("Happy Number\n");
    else
    printf("Not a happy number\n");
}
