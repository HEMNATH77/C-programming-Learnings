#include<stdio.h>
#include<string.h>

char *capital_title(char *str);
int main()
{
    char str[100];
    printf("String: ");
    scanf("%99[^\n]",str);

    char *title = capital_title(str);

    printf("%s\n",title);
    
}

char *capital_title(char *str){

    int length = strlen(str);

    int start = 0,word;
    

    for(int i =0;i <= length;i++){
        if(str[i] == ' '|| str[i] == '\0'){
               word = i - start;

               for(int j = start;j<i;j++){
                if(str[j] >= 'A' && str[j] <= 'Z')
                str[j] = str[j] + 32;

                if(word > 2 && j==start){
                    if(str[j] >= 'a' && str[j] <= 'z')
                    str[j] = str[j] - 32;
                }
               }
               start = i + 1;
        }
    }

    return str;
}
