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
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n = n-1;
    
    printf("Array elements after deletion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}