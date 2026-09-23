#include<stdio.h>

void print(int x);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    print(n);
    
    //printf("%d ",res);
}
void print(int x){
    if(x>0){
        print(x-1);
        printf("%d ",x);
        
    }

}
