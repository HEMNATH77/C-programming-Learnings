#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3))
    printf("%d is middle\n",n1);
    
    else if((n2 > n1 && n2 < n3)||(n2 < n1 && n2 > n3))
    printf("%d is middle\n",n2);
    
    else if((n3 > n2 && n3 < n1) || (n3 < n2 && n3 > n1))
    printf("%d is middle\n",n3);
    
    return 0;
}
