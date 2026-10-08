#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    printf("Enter string : ");
    
    
    scanf(" %[^\n]",str);
    
    int length = strlen(str);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(str[i] + str[j] == str[i+2]){
                printf("%d",str[i]);
            }
        }
    }
    
}
