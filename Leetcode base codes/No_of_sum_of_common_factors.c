#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    int sum = 0;
    
    for(int i = 1;i<=n;i++){
        if(n%i == 0 && m%i == 0)
            sum = sum+1;
    }
    
    printf("Sum = %d\n",sum);

}
