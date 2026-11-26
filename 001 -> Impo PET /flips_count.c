#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int set = n ^ m;

    int count = 0;
    for(int i=0;i<8;i++){
        int get = set & (1<<i);

        if(get)
        count = count + 1;

    }
    printf("Count => %d\n",count);
}
