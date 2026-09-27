#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
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
            for(int k=j+1;k<n;k++){
                if (arr[i] + arr[j] + arr[k] == target){
                    printf("%d %d %d",i,j,k);
                    return 0;
            }
        }
    }
}
return 0;
