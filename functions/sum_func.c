#include<stdio.h>


//function definition

int sum(int n1,int n2);

int main()
{
    int n1,n2;
    printf("Enter n1 n2 values: ");
    scanf("%d %d",&n1,&n2);
    
    //function call
    
    int res = sum(n1,n2);
    
    printf("sum = %d\n",res);
    
    return 0;
}
int sum(int n1,int n2){              // here we can use any variable name instead of n1 and n2
    int sum = n1 + n2;
    return sum;
}

/*                                       or         


#include<stdio.h>


//function definition

void sum(int n1,int n2){
    int sum = n1 + n2;
    printf("Sum =%d",sum);
}

int main()
{
    int n1,n2;
    printf("Enter n1 n2 values: ");
    scanf("%d %d",&n1,&n2);
    
    //function call
    
    sum(n1,n2);
    
    return 0;
}














*/
