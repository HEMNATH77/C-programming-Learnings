#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array elements: ");
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int found = 0;
    for(int i=0;i<n - 2;i++){
        if( (arr[i] %2 !=0) && (arr[i+1] %2 != 0) && (arr[i+2] % 2 != 0) ){
        found = 1;
        break;
        }
    }
    if(found)
    printf("True\n");
    else
    printf("False\n");

}
