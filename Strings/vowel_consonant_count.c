#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    char str[n];
    printf("Enter string : ");
    scanf("%s",str);
    
    int cons_count = 0;
    int vow_count = 0;
    for(int i=0;i<n;i++){
        if(str[i] == 'A' ||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'
        ||str[i] == 'U'||str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||
        str[i] == 'o' || str[i] == 'u')
        vow_count = vow_count + 1;
        
        else
        cons_count = cons_count + 1;
    }
    
    printf("vowels count = %d\n",vow_count);
    printf("constant count = %d\n",cons_count);
    
    return 0;
}
