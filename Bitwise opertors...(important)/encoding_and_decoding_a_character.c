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
    
    printf("Encoded array: ");
    for(int i = 0;i<8;i++){
        printf("%c ",arr[i]);
    }
    
    printf("\n");
    char d_ch = 0;
    int k = 7;
    for(int i =0;i<8;i++){

        int get = arr[i] & 1; 
    

        // setting 
        d_ch = d_ch  | (get << k);

        k--;
    }

    printf("Decoded character : ");

    printf("%c ",d_ch);
    
}
