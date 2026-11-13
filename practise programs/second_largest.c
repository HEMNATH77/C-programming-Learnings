#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == arr[0])
        count ++;
    }

    if(count == n){
    printf("All elements are equal!! not possible \n");
    return 0;
    }


    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    
    printf("largest = %d\n",largest);

    int small = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < largest && arr[i] < small)
        small = arr[i];
    }

    printf("Small = %d\n",small);

    int sec_largest = small;
    for(int i=0;i<n;i++){
        if(arr[i] < largest && arr[i] > sec_largest)
        sec_largest = arr[i];
    }

    printf("Second largest = %d\n",sec_largest);
}
