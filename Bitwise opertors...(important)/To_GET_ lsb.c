#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int get_lsb = num & 1;

    if(get_lsb)                  // checks the last bit of the num after & with 1
    printf("Lsb = 1\n");          
    else
    printf("Lsb = 0\n");
} 
