#include<stdio.h>
#include<string.h>

int main()
{
    char num[50];
    printf("Number string: ");
    scanf("%49[^\n]",num);

    int length = strlen(num);

    int eve_sum = 0;
    int odd_sum = 0;

    for(int i=0 ;i<length;i++){
        if(i%2 == 0)
        eve_sum = eve_sum + (num[i] - '0');
        else
        odd_sum = odd_sum + (num[i] - '0');
    }

    if(eve_sum == odd_sum)
    printf("Balanced\n");
    else
    printf("Not Balanced\n");
}
