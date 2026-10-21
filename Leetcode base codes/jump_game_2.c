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

    int jumps = 0;
    int reach = 0;
    int current = 0;

    for(int i=0;i<n-1;i++){
        if( i+ arr[i] > reach)
        reach = i+arr[i];

        if(i == current){
        jumps++;
        current = reach;
    }
    
    }
printf("jumps : %d\n",jumps);
    
}
