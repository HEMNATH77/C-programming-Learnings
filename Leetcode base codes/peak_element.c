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

    // edge case: if the array has only one element, that element is a peak
    if(n==1){
        printf("peak element index is 0\n");
        return 0;
    }

    // edge case: if the first element is greater than the second element, it is a peak
    if(arr[0]>arr[1]){
        printf("peak element index is 0\n");
        return 0;
    }

    for(int i=0;i<n-2;i++){ // We use i<n-2 because we access arr[i+2], 
                            // so i must stop at n-3 to keep arr[i+2] within the array.
        if(arr[i] < arr[i+1] && arr[i+1] > arr[i+1+1]){
            printf("peak element index is %d\n",i+1);
            return 0;
        }
    }

    // edge case: if the last element is greater than the second last element, it is a peak
    if(arr[n-1]>arr[n-2]){
        printf("peak element index is %d\n",n-1);
        return 0;
    }
}