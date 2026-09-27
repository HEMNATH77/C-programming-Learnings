#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char ch;
    printf("Enter target : ");
    scanf(" %c",&ch);
    
    
    char str[n];
    printf("Enter string : ");
    scanf(" %[^\n]",str);
    
    
    for(int i=0;i<n;i++){
        if(str[i] == ch){
            printf("%s",&str[i]);
            return 0;
        }
    }
    #include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char str[n];
    scanf(" %[^\n]",str);
    
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);
    
    for(int i=0;i<n;i++){
        if(str[i] == ch)
        printf("%s",&str[i]);
        return 0;
    }
    
    printf("Character is not found in the string");

    return 0;
}
    return 0;
}
