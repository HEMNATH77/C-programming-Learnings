#include<stdio.h>
int main()
{
    char ch = 'A';
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%c ",ch);
            ch++;
        }
        
        printf("\n");
    }
    return 0;
}


/*

output:

A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 

*/