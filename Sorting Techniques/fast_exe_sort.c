#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter n1,n2: ");
    scanf("%d %d",&n1,&n2);
    
    int arr1[n1],arr2[n2];
    
    printf("Getting Array 1 elements: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Getting Array 2 elements: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int count1 = 0;
    int count2 = 0;
    printf("Swapping Array 1: ");
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n1-1-i;j++){
            if(arr1[j] > arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
                count1 = count1 + 1;
            }
                //count1 = 0;
            
        }
    }
    
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    
    printf("Swapping Array 2: ");
    for(int i=0;i<n2-1;i++){
        for(int j=0;j<n2-1-i;j++){
            if(arr2[j] > arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
                count2 = count2 + 1;
            }
            
        }
    }

    for(int i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    
    printf("Count 1 = %d\n",count1);
    printf("Count 2 = %d\n",count2);
    
    if(count1 > count2)
    printf("count 2 required fewer steps");
    
    else
    printf("count 1 required fewer steps");
    
    return 0;
}