// Modifiable Array of Srings

#include<stdio.h>

int main()
{
    char str[5][25] = {"ABC","DEF","GHI","JKL","MNO"};
    str[1][2] = 'x';
    // str[0] = "XYZ";  -> is not possible 

    for(int i=0;i<5;i++){
        printf("%s ",str[i]);
    }
}

// Constant Array of strings


#include <stdio.h>

int main()
{
    char *ptr[5] = {"ABC","DEF","GHI","JKL","MNO"};
    ptr[0] = "XYZ";
    // ptr[0][1] = 'x';    -> is not possible 
    for(int i=0;i<5;i++){
        printf("%s ",ptr[i]);
    }

}
