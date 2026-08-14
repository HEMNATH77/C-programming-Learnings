#include<stdio.h>
int main()
{
    int a,last;
    printf("Enter the values of a \n");
    scanf("%d",&a);
    
    last = (a % 10) *10 + (a / 10) ;
    
    printf("rev = %d\n",last);
    return 0; 
    
}