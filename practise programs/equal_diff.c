// Check whether three numbers are equal, or which one is different.

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1 == n2  && n1 == n3) 
    printf("Equal");
    
    else if(n1 == n2)
    printf("%d",n3);
    
    else if(n2 == n3)
    printf("%d",n1);
    
    else if(n1 == n3)
    printf("%d",n2);
    
    else 
    printf("Unequal");
}
