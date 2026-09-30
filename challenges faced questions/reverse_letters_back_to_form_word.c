//  input : dlrow olleh
//  output: world hello

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    int length = strlen(str);

    int start = 0;

    for(int i = 0; i <= length; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int j = i - 1;

            while(start < j)
            {
                char temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}


