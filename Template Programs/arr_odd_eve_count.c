#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int eve_count = 0,odd_count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eve_count = eve_count + 1;
        }
        else{
            odd_count = odd_count + 1;
        }
    }
    printf("Even count: %d\n",eve_count);
    printf("Odd count: %d",odd_count);

    return 0;
}
