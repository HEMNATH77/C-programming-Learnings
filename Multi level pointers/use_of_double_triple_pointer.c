// Use of double and triple pointers...

#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    int **q = &p;
    int ***r = &q;

    ***r = 80;
    //**q = 50;

    printf("updayted value : %d\n",a);
}
