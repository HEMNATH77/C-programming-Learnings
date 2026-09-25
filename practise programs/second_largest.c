#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int largest = arr[0];
    int second_largest = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    
    printf("largest = %d\n",largest);
    
    for(int i=0;i<n;i++){
        if(largest > arr[i] && second_largest < arr[i])
        second_largest = arr[i];
    }
    
    printf("second largest = %d",second_largest);
    
    return 0;
}
