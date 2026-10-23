#include<stdio.h>


int string_n_cmp(char *str1,char *str2,int n);

int main()
{
    char str1[50];
    char str2[50];
    
    printf("String 1: ");
    scanf("%s",str1);
    printf("String 2: ");
    scanf("%s",str2);
    
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int res = string_n_cmp(str1,str2,n);
    
    if(res == 0)
    printf("str1 and str2 are equal\n");
    
    else if(res > 0)
    printf("str 2 is less than str1\n");
    
    else if(res < 0)
    printf("str1 is less than str2\n");
}

int string_n_cmp(char *str1,char *str2,int n){
    
    int i = 0;
    
    while(n>0){
        if(str1[i] != str2[i])
        return str1[i] - str2[i];
        
        if(str1[i] == '\0')
        return 1;
        
        i++;
        n--;
    }
    return 0;
}
