#include<stdio.h>

int main()

{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        if(!(i%3 == 0 && i%5 == 0))
           sum = sum + i;
    }

    printf("Sum = %d\n",sum);
}
