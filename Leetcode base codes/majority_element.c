#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array 1 Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int half = n / 2;

    int freq = 0;
    for(int i=0;i<n;i++){
        freq = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j])
            freq = freq + 1;
        }
    
    if(freq > half){
        printf("Majority element => %d\n",arr[i]);
        return 0;
    }
    }
}
