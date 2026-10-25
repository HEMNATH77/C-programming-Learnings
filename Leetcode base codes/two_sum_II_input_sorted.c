#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int target;
    printf("Enter target: ");
    scanf("%d",&target);


    int res[2];

    for(int i=0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            if(arr[i] + arr[j] == target){
                res[0] = i + 1;
                res[1] = j + 1;
            }
        }
    }
     
    
    for(int i=0;i<2;i++){
        printf("%d ",res[i]);
    }
}
