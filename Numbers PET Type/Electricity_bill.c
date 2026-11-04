#include<stdio.h>

int main()
{
    int units;
    printf("Enter units: ");
    scanf("%d",&units);
    
    int bill,remain;
    if(units <=100)
    bill = (units * 2) + 50;

    else if(units >100 && units <= 200){
        remain = (units - 100) * 3;
        bill = (100 * 2) + remain + 50;
        printf("Electricity bill = %d\n",bill);
    }

    else if(units > 200 && units <= 500){
        remain = (units - 200) * 5;
        bill = (100 * 2) + (100* 3) + remain + 50; 
        printf("Electricity bill = %d\n",bill);
    }

    else{
        remain = (units - 500) * 7;
        bill = (100 * 2) + (100 * 3) + (300 * 5) + remain + 50;
        printf("Electricity bill = %d\n",bill);
    }
}
