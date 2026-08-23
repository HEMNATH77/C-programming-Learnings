#include<stdio.h>
int main()
{
    int n,a = 0,b = 1,c;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(int i=0;i<n - 1;i++){
        printf("%d ",a);
         
        c = a + b ;
        a = b;
        b = c;
    }
    return 0;
}
