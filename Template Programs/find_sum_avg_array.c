#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(int j=0;j<n;j++){
        sum = sum + arr[j];
        
    }
    printf("Sum = %d\n",sum);
    int avg = sum /n;
    printf("Average = %d\n",avg);
    return 0;
}
