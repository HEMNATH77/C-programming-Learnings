#include<stdio.h>
int main()
{
    char ch = 'A';
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}

/*

output:

A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E

*/