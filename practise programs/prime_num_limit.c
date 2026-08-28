#include<stdio.h>
int main()
{
    int limit;
    printf("Enter limit: ");
    scanf("%d",&limit);
    
    for(int i=2;i<=limit;i++){
        int flag = 0;
        for(int j=2;j<i;j++){
            if(i%j ==0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}