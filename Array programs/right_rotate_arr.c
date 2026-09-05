#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int temp = arr[n-1];
    
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
    printf("Array After Right rotation: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    return 0;
}