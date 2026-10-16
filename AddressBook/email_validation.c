//  Sample

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    printf("Enter email: ");
    scanf("%99[^\n]",str);
    
    int length = strlen(str);

    int lower_valid = 0,digit_valid = 0;
    for(int i=0;i<length;i++){
     if(islower(str[i]))
     lower_valid = 1;

     if(isdigit(str[i]))
     digit_valid = 1;
    }
    if(lower_valid == 0)
    printf("At least one lowercase letter\n");
    if(digit_valid == 0)
    printf("Atleast one digit should be there \n");
    int at_count = 0;
    for(int i=0;i<length;i++){
        if(str[i] == '@')
        at_count ++;
    }
    if(at_count != 1)
    printf("Exactly one @ symbol\n");

    int dot_count = 0;
    for(int i=0;i<length;i++){
        if(str[i] == '.')
        dot_count++;
    }
    if(dot_count == 0)
    printf("At least one dot\n");

    int com = 0;
    if(length >= 4){
    if(str[length - 4] == '.'&& str[length - 3]== 'c' && str[length - 2]== 'o' && str[length - 1] == 'm')
        com = 1;
    }


    if(com == 0)
    printf(" Invalid .com is not present ");

    int at_pos = -1;
    int dot_pos = -1;

    for(int i=0;i<length;i++){
        if(str[i] == '@')
        at_pos = i;

        if(str[i] == '.')
        dot_pos = i;
    }
    // printf("at_ position : %d\n",at_pos);
    // printf("dot_position: %d\n",dot_pos);

    if(at_pos == -1 || dot_pos == -1 || dot_pos < at_pos)
    printf("Dot must appear after \n");


    int dot_after_at = 0;

    for(int i = at_pos + 1; i < length; i++)
    {
    if(str[i] == '.')
        dot_after_at++;
    }

    if(dot_after_at != 1)
    printf("Only one dot should be present after @ symbol\n");
    

}
