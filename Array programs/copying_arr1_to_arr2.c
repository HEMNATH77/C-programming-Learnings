#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr1[n];
    int arr2[n];
    
    printf("Array 1 elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Array1 elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    
    printf("Coping arr1 to arr2...");
    for(int i=0;i<n;i++){
        arr2[i] = arr1[i];
    }
    printf("\n");
    printf("Array2 elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    
    return 0;
    
}
