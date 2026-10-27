#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    for(int i=31;i>=0;i--){
        int get = num & (1<<i);

        if(get)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    for(int i=31;i>=0;i--){
        int bit = num & (1<<i);

        if(bit){
            printf("Left most index %d\n",i);
            printf("Left most value %d\n",(1<<i));

            break;
        }
    }
}
