#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements: ");
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    
    int sum =0;
    for(int i=0;i<n-1;i++){
        sum = sum + arr[i];
    }
    printf("Sum = %d\n",sum);
    
    int a_sum = n * (n+1)/2;
    printf("Num : %d\n",a_sum);
    
    
    int actual_sum = a_sum - sum;
    printf("Missing number: %d\n",actual_sum);
    
    return 0;
}