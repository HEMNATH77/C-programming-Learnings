#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int pos;
    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Binary of num: ");
    for(int i=7;i>=0;i--){
        int bin = num & (1<<i);
        if(bin)
        printf("1");
        else
        printf("0");
    }

    printf("\n");
    

    int bit = num &(((1<<n) - 1) <<(pos - n + 1));
    
    printf("Binary of num after bit ops: ");
    for(int i=7;i>=0;i--){
        int  bit_bin = bit & (1<<i);
        if(bit_bin)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    if(bit)
    printf("%d(nth) bit is 1",n);
    else
    printf("%d(nth) bit is 0",n);
}
