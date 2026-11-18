#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int temp = n / 2;
    int a = 0,b=1,c;
    
    for(int i=1;b<=temp;i++){
        c = a + b;

        a = b;
        b = c;

        if(c == temp){
        printf("true\n");
        return 0;
        }
    }
    printf("false\n");
}
