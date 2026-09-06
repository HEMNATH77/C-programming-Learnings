#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n],visit[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visit[i] = 0;
    }
    
    printf("Array elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    // printf("Visit array...: ");
    // for(int i=0;i<n;i++){
    //     printf("%d ",visit[i]);
    // }
    printf("\n");
    for(int i=0;i<n;i++){
        if(visit[i])
        continue;
        
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                visit[j] = 1;
            }
        }
        printf("frequency of %d is %d\n",arr[i],count);
    }
    
    return 0;
    
}