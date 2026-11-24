#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int bit = n ^ m;
    printf("%d\n",bit);

    int count = 0;
    for(int i=0;i<32;i++){
        int set = bit & (1<<i);

        if(set)
        count++;
    }

    printf("Count =>%d\n",count);
}
