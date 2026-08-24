#include<stdio.h>
int main()
{
    int i,n,m;
    int count = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);
    
    for(i=1;n<m;n++){
        count = count + 1;
        
    }
    printf("Integers count: %d\n",count);
    return 0;
}