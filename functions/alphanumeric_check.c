#include <stdio.h>

int my_isalnum(int x);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    
    
    if (ret == 1)
    printf("The character %c is an alpha numeric character\n",ch);
    
    else
    printf("The character %c is not an alpha numeric character\n",ch);
    
}

int my_isalnum(int x){
    if((x >= 'A' && x <= 'Z')|| (x >= 'a' && x <= 'z')||(x >= '0' && x <= '9'))
    
    return 1;
    
    else 
    return 0;
}
