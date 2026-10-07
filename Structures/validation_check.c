#include<stdio.h>

struct number{
    int id;
    char name[25];
    char mobile[20];
};

int main()
{
    struct number n[2];
    
    for(int i=0;i<2;i++){
        int length;
        int numeric;
        
        printf("Enter id : ");
        scanf("%d",&n[i].id);

        printf("Enter name : ");
        scanf(" %[^\n]",n[i].name);
        do{
            
            printf("Enter mobile number : ");
            scanf(" %[^\n]",n[i].mobile);
            
            int j = 0;
            length = 0;
            while(n[i].mobile[j] != '\0'){
                length ++;
                j++;
            }
            
            numeric = 1;
            for(int j = 0;j<length;j++){
            if(n[i].mobile[j] < '0' || n[i].mobile[j] > '9'){
                numeric = 0;
                break;
            }
            }
            
            if(length != 10 || numeric == 0)
            printf("Invalid input please enter again\n");
            
        }
        while (length != 10 || numeric == 0);
    }
    
    for(int i=0;i<2;i++){
        printf(" id : %d || name :%s || mobile number : %s\n",n[i].id,n[i].name,n[i].mobile);
    }
}
