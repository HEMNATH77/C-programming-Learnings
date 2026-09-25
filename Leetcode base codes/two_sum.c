#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    
    int target;
    printf("Enter target: ");
    scanf("%d",&target);
    
    int arr[n];
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){ 
                printf("%d %d",i,j);
                return 0;
            }
            
        }
       
    }
    
}
