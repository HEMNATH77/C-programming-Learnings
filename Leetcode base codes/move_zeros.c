#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int org_n = n;
    int arr[n];
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            for(int j = i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            n --;
            i --;
        }
    }

    printf("After moving zeros to end :  ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i = n;i<org_n;i++){
        printf("0 ");
    }
}
