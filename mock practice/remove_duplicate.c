#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    printf("Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        int found = 0;
        for(int j=0;j<count;j++){
            if(arr[i] == arr[j]){
               found = 1;
               break;
            }
        }
        if(found == 0){
        visited[count] = arr[i];
        count = count + 1;
    }
    }
    
    printf("After removing duplicates\n");
    for(int i=0;i<count;i++){
        printf("%d ",visited[i]);
    }
}
