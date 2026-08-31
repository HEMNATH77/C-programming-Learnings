#include<stdio.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int target;
    printf("Enter the element to be found: ");
    scanf("%d",&target);
    
    for(int i=0;i<n;i++){
        if(arr[i] == target){
        flag = 1;
        break;
        }
    }
    
    if (flag == 0)
    printf("Not found\n");
    
    else
    printf("element found\n");
    return 0;
}
