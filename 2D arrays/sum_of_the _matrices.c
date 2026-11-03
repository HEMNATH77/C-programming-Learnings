#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter r: ");
    scanf("%d",&r);
    printf("Enter c: ");
    scanf("%d",&c);
    
    int arr1[r][c],arr2[r][c];
    int sum[r][c];
    
    printf("Enter Array 1 elements: ");
     
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter Array 2 elements ");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n");
    
    printf("Array 1 elements: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Array 2 elements: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr2[i][j]);
        }

        printf("\n");
    }

    
    printf("\n");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("Sum of the array: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
