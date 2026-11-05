#include<stdio.h>

int main()
{
    int n,m;

    int gcd = 1;

    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    int small;
    if(n<m)
    small = n;
    else
    small = m;

    for(int i=1;i<=small;i++){
        if(n%i == 0 && m%i == 0)
        gcd = i;
    }

    printf("GCD => %d\n",gcd);
}
