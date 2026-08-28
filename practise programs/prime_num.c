#include<stdio.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    printf("Prime number\n");
    else
    printf("not Prime\n");
    
    return 0;
}