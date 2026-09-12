#include<stdio.h>

//function definition
int rev(int x)
{
    int digit,reverse = 0;
    while(x!=0){
        digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }
    return reverse;
}

int main()

{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    //function call
    int res = rev(n);
    
    printf("RESULT : %d\n",res);
    
    if(n == res)
    printf("Palindrome\n");
    
    else
    printf("Not Palindrome\n");
    
    return 0;
}

