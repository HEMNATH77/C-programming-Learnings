
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%99[^\n]",str);

    int length = strlen(str);
    char res[100];
    int i = length - 1;

    while(i >= 0 && str[i] == ' '){
        i--;
    }
    for( ;i>=0;i--){
      if(str[i] == ' '){
        break;
    }
    }
    int start = i+1;
    int w = 0;

    for(int j=start;j<length;j++){
        res[w] = str[j];
        w ++;
    }
    res[w] = '\0';
    printf("%s",res);

}
