#include<stdio.h>
#include<string.h>
char *substring_func(char *s1,char *s2);

int main()
{
    char s1[50];
    char s2[50];
    printf("String 1: ");
    scanf("%[^\n]",s1);
    printf("String 2: ");
    scanf(" %[^\n]",s2);
    
    char *ptr = substring_func(s1,s2);

    
    
    if(ptr == NULL)
    printf("Substring not found");
    
    else if(ptr != NULL)
    printf("%s\n",ptr);
 }

char *substring_func(char *s1,char *s2){
    
    int i=0,length1 = 0,length2 =0;
    while(s1[i]){
        length1++;
        i++;
    }
    int j=0;
    while(s2[j]){
        length2++;
        j++;
    }
    
    for(int i=0;i<length1;i++){
        int count = 0;
        for(int j=0;j<length2;j++){
            if(s1[i+j] == s2[j])
            count = count + 1;
            else
            break;
        }
        
        if (count == length2){
            return &s1[i];
        }
    }
    return NULL;
}