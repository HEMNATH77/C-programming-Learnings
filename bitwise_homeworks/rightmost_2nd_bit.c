#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int count = 0;

    for(int i=31;i>=0;i--){
        int bin = num& (1<<i);

        if(bin)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    for(int i=0;i<32;i++){
        int get = num & (1<<i);

        if(get)
        count = count + 1;
    
        if(count == 2){
        printf("%d ",i);
        break;
        }
    }

}




/*


#include<stdio.h>

int main()
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);

    num = num & (num - 1);

    int res = num & (~num + 1);
    
    if(res != 0){
    //printf("2nd position = >%d\n",res);
    int index = 0;

        while (res > 1)
        {
            res = res >> 1;
            index++;
        }

        printf("Index = %d\n", index);
    }
}



*/
