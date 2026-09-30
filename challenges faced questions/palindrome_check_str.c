#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char str[n];
    printf("Enter string: ");
    scanf(" %[^\n]",str);
    
    int length = strlen(str);
    
    printf("length of string = %d\n",length);
    
    char rev[n];
    
    for(int i=0;i<length;i++){
        rev[i] = str[length - 1 -i];
        
    }
    
    rev[length] = '\0';
    
    printf("Reversed string = %s\n",rev);
    
    int flag = 1;
    for(int i=0;i<length;i++){
        if(str[i] != rev[i]){
            flag = 0;
            break;
        }
        
    }
    
    if(flag == 1)
    printf("Palindrome\n");
    else
    printf("Not a palindrome\n");

}
