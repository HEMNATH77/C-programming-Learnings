#include<stdio.h>
int main() 
{
    int age;
    char c;
    float marks;
    double total;

    printf("enter the inputs : ");
    scanf("%d %c %f %lf",&age , &c, &marks , &total);

    printf("age = %d\n",age);
    printf("char = %c\n",c);
    printf("marks = %f\n",marks);
    printf("total = %lf\n",total);

    return 0;
}