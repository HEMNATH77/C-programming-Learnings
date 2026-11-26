#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int count = 0;
    int found = 0;
    for(int i=0;i<32;i++){

        int set = n & (1<<i);

        if(set)
        count = count + 1;

        if(count == 3)
        found = 1;

        if(found == 1){
        printf("%d",i+1);
        break;
        }
    }

    if(found == 0)
    printf("Not possible\n");
}
