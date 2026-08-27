#include<stdio.h>
int main()
{
    int n;
    int fact = 1;
    int sum = 0;
    int digit;
    
    printf("Enter n: ");
    scanf("%d",&n);
    int temp = n;
    
    while(n!=0){
        digit = n % 10;
      
        n = n/10;
        fact = 1;
        for(int i=1;i<=digit;i++){
            
            fact = fact * i;
        }
        sum = sum + fact;
    }
    
    printf("sum = %d\n",sum);
    
    if(sum == temp)
    printf("Strong  Number\n");
    
    else
    printf("Not a strong number\n");
    
    return 0;
}