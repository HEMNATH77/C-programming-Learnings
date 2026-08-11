#include<stdio.h>
int main()
{
    // 1. Variable Declaration

    int age;
    char name;
    float marks;
    double total;
    printf("int => %d\n",age);
    printf("char => %c\n",name);
    printf("float => %f\n",marks);
    printf("double => %lf\n",total); 
    // Prints the Garbage Value of all the variables...

    // 2.Variable Declaration

    int age = 10;
    char name = 'h';
    float marks = 73.56;
    double total = 234.7;
    printf("int => %d\n",age);
    printf("char => %c\n",name);
    printf("float => %f\n",marks);
    printf("double => %lf\n",total);
    printf("float => %g\n",marks);
    //prints the value we initialised
    return 0; 
}
