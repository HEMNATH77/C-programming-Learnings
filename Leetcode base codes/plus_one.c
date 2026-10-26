#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int plus[n+1];

    for(int i=0;i<n;i++){
        plus[i] = arr[i];
    }

    int i;
    for(i=n-1;i>=0;i--){
        if(plus[i] < 9){
        plus[i] = plus[i] + 1;
        break;
        }
        if(plus[i] == 9){
            plus[i] = 0;
        }

    }

    printf("i value is %d\n",i);


    printf("Final array after plus 1 is: ");
    if(i<0){
        plus[0] = 1;

        for(int j=1;j<=n;j++)
        plus[j] = 0;
        for(int j=0;j<=n;j++){
            printf("%d",plus[j]);
        }
    }

    else
    for(int j = 0;j<n;j++){
        printf("%d",plus[j]);
    }
}
