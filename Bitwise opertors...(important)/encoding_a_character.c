#include<stdio.h>
int main()
{
    char arr[8] = {'A','B','C','D','E','F','G','H'};
    char ch = 'A';
    
    int j = 7;
    
    for(int i=0;i<8;i++){
        
        // getting MSB
        
        int get = ch & (1 << j);
        
        // clearing the LSB
        
        arr[i] = arr[i] & (~1);
        
        // setting
        
        arr[i] = (get >> j) | arr[i];
        
        j--;
    }
    
    for(int i = 0;i<8;i++){
        printf("%c ",arr[i]);
    }

    
}
