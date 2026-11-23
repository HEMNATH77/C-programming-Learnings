#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n + 1];
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n - 1;i>=0;i--){
        if(arr[i] < 9){
        arr[i] = arr[i] + 1;
        break;
        }

        else if(arr[i] == 9){
            arr[i] = 0;
            continue;
        }
    }

    if(arr[0] == 0){
            arr[0] = 1;
            arr[n] = 0;
            n ++ ;
        }    

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
