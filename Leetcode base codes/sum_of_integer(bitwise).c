/// while in leetcode -> change all variables to unsigned int


#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    while(m!=0){
    int s1 = n ^ m;
    int s2 = ((n & m) << 1);
    
    //m stores the carry. We use while (m != 0) 
    //because the loop must continue until no carry remains. 
    //n stores the partial sum and can become 0 while a carry still exists.

    n = s1;
    m = s2;
    //int sum = s1 | s2;
    }
    printf("sum => %d\n",n);
}
