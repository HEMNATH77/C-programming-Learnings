
#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    for(int i=7;i>=0;i--){
        int set = num &(1<<i);
        if(set)
        printf("1 ");
        else
        printf("0 ");
    }

    printf("\n");

    int n = 0;
    int temp = num;

    while(temp!= 0){
        n++;
        temp = temp >> 1;
    }

    int mask = (1<<n) - 1;

    int com =  ~num & mask;

    for(int i=7;i>=0;i--){
        int get =  com & (1<<i);
        if(get)
        printf("1 ");
        else
        printf("0 ");
    }

    printf("\n");

    printf("com = > %d\n",com);
}
