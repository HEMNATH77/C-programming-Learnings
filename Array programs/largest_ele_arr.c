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
    printf("Array elements \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int largest = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    printf("\n");
    printf("largest:%d\n",largest);
    
  return 0;  
}
