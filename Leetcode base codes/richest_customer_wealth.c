#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter n: ");    // row
    scanf("%d",&n);
    printf("Enter m: ");    // column
    scanf("%d",&m);

    int arr[n][m];

    printf("2d array elements \n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    int high = 0;
    
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
            if(sum > high)
            high = sum;
        }
       
        printf("\n");
    }

     printf("High => %d\n",high);

}
