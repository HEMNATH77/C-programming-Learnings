#include<stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array  elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int reach_max = 0;

    for(int i=0;i<n;i++){
        if(i > reach_max){
        printf("False\n");
        return 0;
    }

        if(i + arr[i] > reach_max)
        reach_max = i + arr[i];

    }

    printf("True\n");
}
