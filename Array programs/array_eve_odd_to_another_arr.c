#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int odd_arr[n],even_arr[n];
    
    for(int i=0;i<n;i++){
        even_arr[i] = 0;
        odd_arr[i] = 0;
    }
    
    int eve = 0;
    int odd = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2 ==0){
            even_arr[eve] = arr[i];
            eve++;
        }
        else{
            odd_arr[odd] = arr[i];
            odd++;
        }
    }
    
    printf("Even array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",even_arr[i]);
    }
    printf("\n");
    printf("Odd Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",odd_arr[i]);
    }
    
    return 0;
}
