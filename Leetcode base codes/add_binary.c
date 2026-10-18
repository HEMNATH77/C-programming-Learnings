#include<stdio.h>

#include<string.h>

int main()
{
    char a[100];
    char b[100];

    printf("String a: ");
    scanf(" %99[^\n]",a);

    printf("String b: ");
    scanf(" %99[^\n]",b);

    int length1 = strlen(a);
    int length2 = strlen(b);

    int length = (length1 > length2) ? length1 : length2;

    char res[length + 2];
    
    int carry = 0;
    int k = 0;

    for(int i =0;i < length ;i++){

        int x = 0,y=0;

        if(length1 > i)
        x = a[length1 - i - 1] - '0';

        if(length2 > i)
        y = b[length2 - i - 1] - '0';

        int sum = x + y + carry;

        int digit = sum % 2;

        carry = sum / 2;

        res[k++] = digit + '0';
    } 
    if(carry == 1){
    res[k++] = '1';
    }
    res[k] = '\0';

    for(int i=0;i<k/2;i++){
        char temp = res[i];
        res[i] = res[k - 1 -i];
        res[k - i - 1] = temp;
    }

    printf(" final sum = %s",res);

}
