#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    

    int n = 0;
    while(num != 0){
        n++;
        num = num >> 1;
    }


    int get = (1 << n) - 1;

    printf("%d\n",get);

    for(int i=7;i>=0;i--){
        int set = get & (1<<i);
        if(set)
        printf("1 ");
        else
        printf("0 ");
    }
}
