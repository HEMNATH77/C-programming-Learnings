#include<stdio.h>

struct shopping{
    int product_no;
    char product_name[25];
    char choice;
    float product_price;
    float total;
};

int main()
{
    struct shopping s[1000];
    
    float total_cost = 0;
    int count = 0;
    
    for(int i=0;i<1000;i++){
        
        printf("Enter product_no: ");
        scanf("%d",&s[i].product_no);
        
        printf("Enter product_name: ");
        scanf(" %[^\n]",s[i].product_name);
        
        printf("Enter product_price: ");
        scanf(" %f",&s[i].product_price);
        
        
        
        total_cost = total_cost + s[i].product_price;
        
        count = count + 1;
        
        printf("More money ? More shopping? (y/n): ");
        scanf(" %c",&s[i].choice);
        if(s[i].choice == 'n')
        break;

    }

    printf("No of products : %d\n",count);
    for(int i=0;i<count;i++){
      

        printf("product_no : %d || product_name:  %s || product_price:  %g\n",s[i].product_no,
              s[i].product_name,s[i].product_price);
              
        
    }
    printf("total shopping cost : %g\n",total_cost);


}
