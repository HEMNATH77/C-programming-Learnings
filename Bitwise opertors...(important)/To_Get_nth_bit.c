#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=7;i>=0;i--){
        int bin = num & (1<<i);
        if(bin)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    int bit = num &(1<<n);

    if(bit)
    printf("%d (nth) bit is 1\n",n);

    else
    printf("%d (nth) bit is 0\n",n);
}
