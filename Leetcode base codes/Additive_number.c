
//////////////////         For base condition //////////////////////////


#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    printf("Enter string : ");
    
    
    scanf(" %[^\n]",str);
    int flag = 1;
    int length = strlen(str);
    for(int i=0;i<length/2;i++){
            if((str[i] - '0') + (str[i+1]-'0') != (str[i+2]-'0')){
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        printf("Additive number");
        else
        printf("Normal number");
}
