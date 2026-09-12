#include<stdio.h>

//function definition 

float average(float x,float y,float z){
    
    float avg = (x+y+z)/3;
    
    return avg;
}


int main()
{
    float n1,n2,n3;
    printf("Enter three inputs: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    
    //function call
    
    float res = average(n1,n2,n3);
    
    printf("Average = %f\n",res);
    
    return 0;
}