#include<stdio.h>

int prime(int x){
    int flag = 0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    return 1;
    else
    return 0;
}


int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int res = prime(n);
    
    
    if (res == 1)
    printf("Prime\n");
    
    else
    printf("Normal\n");
    
    return 0;
}