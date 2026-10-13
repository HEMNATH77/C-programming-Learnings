
#include <stdio.h>
#include<string.h>

int my_atoi(const char str[]);

int main()
{
    char str[20];
    
    //printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi(const char str[]){
    int res = 0;
    int flag = 0;
    
    int length = strlen(str);
    
    if(str[0] == '+')
    flag = 0;
    else if(str[0] =='-')
    flag = 1;
    
    if(str[1] == '+' || str[1] =='-' )
    return 0;
    
    if((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z') || str[0] =='*')
    return res;
    
    for(int i=0;i<length;i++){
        if(str[i] >='0' && str[i] <='9'){
            res = res * 10 + (str[i]-48);
        }

    }
    
    
    
    if(flag == 0)
    return res;
    else
    return res * (-1);
    
}
