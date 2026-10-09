#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("String : ");
    scanf(" %[^\n]",str);

    int length = strlen(str);

    int vowel_count = 0;
    for(int i=0;i<length;i++){
        if(str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
             str[i] == 'i' || str[i] == 'I' ||
              str[i] == 'o' || str[i] == 'O' ||
               str[i] == 'u' || str[i] == 'U'){
                vowel_count = vowel_count + 1;
               }
    }

    printf("Vowel_count = %d\n",vowel_count);
    return 0;
}
