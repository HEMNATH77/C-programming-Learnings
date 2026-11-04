#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    printf("Enter row: ");
    scanf("%d",&row);
    int col[row];
    int *ptr[row];

    for(int i=0;i<row;i++){
        printf("Enter the no.of.cols in %d row: ",i);
        scanf("%d",&col[i]);
        ptr[i] = malloc(col[i] * sizeof(int));
        if(ptr == NULL){
        printf("Memory not allocated\n");
        return 0;
    }

    
    }

    for(int i=0;i<row;i++){
        printf("Enter the %d no.of.elements in %d row",col[i],i);
        for(int j=0;j<col[i];j++){
            scanf("%d",&ptr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        free(ptr[i]);
    }
}
