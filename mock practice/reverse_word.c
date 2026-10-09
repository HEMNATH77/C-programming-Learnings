#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("String : ");
    scanf(" %[^\n]",str);

    int space = 0;

    int len = strlen(str);

    for(int i=0;i<=len;i++){
        if(str[i] == ' ' || str[i] == '\0'){
            int j = i - 1;

            while(space < j){
                char temp = str[space];
                str[space] = str[j];
                str[j] = temp;

                space = space + 1;
                j = j - 1;
            }
        space = i + 1;
        }
    }
    printf("Reversed string = %s\n",str);
}
