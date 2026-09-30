#include<stdio.h>

char *string_case_substr(char *str1,char *str2);

int main()
{
    char str1[50];
    char str2[50];
    
    printf("String 1: ");
    scanf("%[^\n]",str1);
    printf("String 2: ");
    scanf(" %[^\n]",str2);
    
    char *ptr = string_case_substr(str1,str2);
    
    if(ptr == NULL)
    printf("Substring not found");
    
    else if(ptr != NULL)
    printf("%s\n",ptr);
}

char *string_case_substr(char *str1,char *str2){
    int i=0,length1=0;
    while(str1[i]){
        length1++;
        i++;
    }
    
    i = 0;
    int length2 =0;
    while(str2[i]){
        length2++;
        i++;
    }
    
    for(int i=0;i<length1;i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        str1[i] = str1[i] + 32;
    }
    
    for(int i=0;i<length2;i++){
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        str2[i] = str2[i] + 32;
    }
    
    for(int i=0;i<length1;i++){
        int count = 0;
        for(int j=0;j<length2;j++){
            if(str1[i+j] == str2[j])
            count = count + 1;
            
            else
            break;
        }
        if(count== length2)
        return &str1[i];
    }
    return NULL;
}