#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    if(a >= 0 && a < 12){
        printf("Good Morning\n");
    }
    else if(a >= 12 && a < 16){
        printf("Good Afternoon\n");
    }
    else if(a >= 16 && a < 19){
        printf("Good Evening\n");
    }
    else if(a >= 19 && a <= 23){
        printf("Good Night\n");
    }
    else{
        printf("Enter valid Time\n");
    }
    return 0;
}