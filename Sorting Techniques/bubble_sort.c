//    Bubble sort Ascending Order


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
    
    for(int i = 0;i< n - 1;i++){
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){        // condition is very important
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
    }
    
    printf("After sorting : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}



// Bubble sort Descending Order

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
    
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     printf("Array elements:\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//      printf("\n");
    
//     for(int i = 0;i< n - 1;i++){
//         for(int j = 0;j < n - i - 1;j++){
//             if(arr[j] < arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//         }
//     }
    
//     printf("After sorting : \n");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
