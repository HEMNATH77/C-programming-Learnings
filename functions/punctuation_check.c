#include <stdio.h>

int my_ispunct(int x);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    
    if(ret == 1)
    printf("Entered character is punctuation character");
    else
    printf("Entered character is not punctuation character");
    
}

int my_ispunct(int x){
    if((x >= '0' && x <= '9')||(x >='A' && x <= 'Z')||(x >= 'a' && x <= 'z'))
    return 0;
    
    else
    return 1;
}
