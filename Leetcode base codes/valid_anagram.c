#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char t[100];
    
    printf("string 1: ");
    scanf("%[^\n]",s);
    printf("string 2: ");
    scanf(" %[^\n]",t);
    
    int length1 = strlen(s);
    int length2 = strlen(t);
    int flag = 0;
    
    for(int i=0;i<length1;i++){
        int count_1 = 0;
        int count_2 = 0;
        for(int j=0;j<length2;j++){
            if(s[i] == s[j])
            count_1 ++;
            
            if(s[i] == t[j])
            count_2 ++;
        }
        
        if (count_1 != count_2){
            flag = 1;
            break;
        }
        
    }
    if (flag==0)
    printf("Anagram\n");
        
    else
    printf("Not anagram\n");
        
    return 0;    
}
