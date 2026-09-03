#include<stdio.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int ele;
    printf("Enter the element: ");
    scanf("%d",&ele);
    
    for(int i=n-1;i>=0;i--){
        if(ele == arr[i]){
            printf("index : %d",i);
            flag = 1;
            break;
        }
    }
    printf("\n");
    if(flag == 1){
        printf("element found\n");
    }
    else{
        printf("Not found\n");
    }
    return 0;
}