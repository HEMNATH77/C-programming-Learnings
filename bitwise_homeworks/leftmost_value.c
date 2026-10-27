#include<stdio.h>

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    for(int i = 31;i>=0;i--){
        int get = num & (1<<i);

        if(get)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    for(int i = 31;i>=0;i--){
        int val = num & (1<<i);

        if(val){
            printf("value = %d",1<<i);
            break;
        }
    }
}
