#include<stdio.h>

void swap(void *p,void *q,int size){

    for(int i = 0;i<size;i++){
    char temp = *(char *)(p + i);

    *(char*)(p+i) = *(char *)(q+i);

    *(char *)(q+i) = temp;
}
}

int main()
{
    int num1 = 10,num2 = 2;

    printf("Before Swaping\n");
    printf(" num1 => %d\n num2 => %d\n",num1,num2);

    swap(&num1,&num2,sizeof(int));
    printf("After Swaping\n");
    printf(" num1 => %d\n num2 => %d\n",num1,num2);

    
}
