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
    
    int sum = 0;
    for(int i=0;i<n;i++){
        if(n % (i+1) == 0){ // i + 1 gives the 1-based position because array indexing starts from 0.
           sum = sum + (arr[i] * arr[i]);
        }
    }

    printf("Sum = %d\n",sum);

}
