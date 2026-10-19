#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("String : ");
    scanf("%99[^\n]",str);

    int length = strlen(str);

    for(int i=0;i<length;i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    }

    printf("%s",str);
}
