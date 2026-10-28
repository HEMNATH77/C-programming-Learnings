#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    
    printf("Binary of the number\n");
    for(int i=31;i>=0;i--){
       int  bin = num & (1<<i);

       if(bin)
       printf("1");
       else
       printf("0");
    }

    int res = 0;
    int mask = (1<<4) - 1;

    for(int i = 0;i<32;i = i + 8){
        int byte = (num >> i) & ( (1<<8) - 1);

        int lower = byte & mask;

        int upper = (byte >> 4) & mask;

        int swap = ( lower << 4 ) | upper;

        res = res | (swap << i);
        
    }
    printf("\n");
    printf("res => %d\n",res);
    printf("\n");

    printf("After switch upper lower\n");
    
    for(int i=31;i>=0;i--){
       int  binary = res & (1<<i);

       if(binary)
       printf("1");
       else
       printf("0");
    }

}
