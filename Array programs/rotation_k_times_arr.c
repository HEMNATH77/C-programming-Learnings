#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int k;
    printf("Enter k position: ");
    scanf("%d",&k);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(int j=0;j<k;j++){
        int temp = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
    }
    
    printf("Array After K postion rotation: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    return 0;
    
}