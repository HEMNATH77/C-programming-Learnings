#include<stdio.h>

// function definition
int count(int x){
    int count = 0;
    
    while(x!=0){
        // int digit = x % 10;
        // count = count + 1;
        // x = x /10;

        x = x / 10;
        count = count + 1;
    }
    
    return count;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    //function call
    int res = count(n);
    
    printf("Count = %d\n",res);
    return 0;
}