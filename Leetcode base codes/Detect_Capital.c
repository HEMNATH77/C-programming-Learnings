#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("String : ");
    scanf("%99[^\n]",str);

    int length = strlen(str);
    int upper_case = 0;

    for(int i=0;i<length;i++){
        if(str[i] >= 'A' && str[i] <='Z'){
            upper_case = upper_case + 1;
        }
    }

    if(upper_case == length)
    printf("True\n");

    if(upper_case == 0)
    printf("True\n");

    if(upper_case == 1 && str[0] >= 'A' && str[0] <= 'Z')
    printf("True\n");

    else
    printf("False\n");
}
