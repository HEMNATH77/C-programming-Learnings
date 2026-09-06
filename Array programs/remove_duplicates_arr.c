#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n],visit[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visit[i] = 0;                  // makes visit arr filled with 0.
    }
    
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
        if(visit[i])
        continue;
        
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j])
                visit[j] = 1;          
        }
    }
    
    int res[n],k=0;
    for(int i=0;i<n;i++){
        if(visit[i]==0){
            res[k] = arr[i];
            k = k+ 1;
        }
    }
    
    printf("Unique array elements: ");
    for(int i=0;i<k;i++){
        printf("%d ",res[i]);
    }

    printf("\n");
    
    return 0;
}