#include<stdio.h>

int main()
{
    int arr[7];

    printf("Array elements: ");
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }

    for(int k = 0 ;k<7;k++){
    for(int i=0;i<7;i++){
        int count = 0;
        for(int j = 0;j < 7;j++){
            if(arr[j] < arr[i] || (arr[j] == arr[i] && j < i))
            count = count + 1;
        }
        
        if(count == k)
        printf("%d",arr[i]);
    }
}
return 0;
}
