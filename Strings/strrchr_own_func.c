#include<stdio.h>
#include<string.h>


char *string_char(char *str,char ch);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char str[n];
    printf("Enter character string: ");
    scanf(" %[^\n]",str);
    
    char ch;
    printf("Enter Character: ");
    scanf(" %c",&ch);
    
    char *ptr = string_char(str,ch);
    
    if(ptr == NULL)
    printf("Character not found");
    
    else
    printf("%s",ptr);
}

char *string_char(char *str,char ch){
    int length = strlen(str);
    for(int i=length - 1;i >= 0;i--){
        if(str[i] == ch){
            return &str[i];
        }
    }
    return  NULL;
}

//                     OR

/*
#include<stdio.h>
#include<string.h>


char *string_char(char *str,char ch);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char str[n];
    printf("Enter character string: ");
    scanf(" %[^\n]",str);
    
    char ch;
    printf("Enter Character: ");
    scanf(" %c",&ch);
    
    char *ptr = string_char(str,ch);
    
    if(ptr == NULL)
    printf("Character not found");
    
    else
    printf("%s",ptr);
}

char *string_char(char *str,char ch){
    int length =0,i=0;
    while(str[i]){
        length ++;
        i++;
    }
    
    for(int i=length - 1;i >= 0;i--){
        if(str[i] == ch){
            return &str[i];
        }
    }
    return  NULL;
}*/

