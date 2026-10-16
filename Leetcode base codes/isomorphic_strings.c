#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char t[100];

    printf("Enter s: ");
    scanf("%99[^\n]",s);

    printf("Enter t: ");
    scanf(" %99[^\n]",t);

    int s_length = strlen(s);
    int t_length = strlen(t);

    if(s_length != t_length){
        printf("Not a isomorphic String");
        return 0;
    }
    
    
    int flag = 0;
    for(int i=0;i<s_length;i++){
        
        for(int j=0;j<i;j++){
            if( (s[i]==s[j]) != (t[i] == t[j])){
                flag = 1;
                break;
            }
        }
        
    }
    if(flag == 0)
        printf("Isomorphic string\n");
        else
        printf("Not isomorphic string\n");
}
