#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the ch: ");
    scanf("%c",&ch);
    
    if(ch >= 65 && ch <= 90){
        printf("Uppercase\n");
    }
    else if(ch >= 97 && ch <= 122){
        printf("Lowercase\n");
    }
    else if(ch >= 48 && ch <= 57){             // 0 - 9
        printf("Digits\n");
    }
    else{
        printf("Special Characters\n");
    }
    return 0;
}