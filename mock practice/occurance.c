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
    
    printf("Array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i=0;i<n;i++){
        
        if(arr[i] == target){
            found = 1;
            printf("indexes : %d ",i);
            break;
        }
        
        
    }
    if(found == 0)
        printf("Not found\n");
}
