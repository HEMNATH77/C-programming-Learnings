#include<stdio.h>

int main()
{
    int row;
    printf("Enter rows: ");
    scanf("%d",&row);

    int col;
    printf("Enter col: ");
    scanf("%d",&col);

    int arr[row][col];
    
    
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    float sum = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum = sum + (arr[i][j]);
            
        }
        printf("Average = %f\n",(sum/col));
        sum = 0;
        printf("\n");
    }
    
}
