
#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int largest = 0;

    printf("Factors : ");

    for(int i=2;i<=n;i++){
        if(n % i == 0){
            int j;
            for(j= 2;j * j <= i;j++){
                if(i % j == 0){
                    break;
                }
            }

            if(j * j > i){
            printf("%d ",i);
            largest = i;
            }
        }
    }

    printf("\n");

    printf("Largest => %d\n",largest);
    
}

// ------------------------------- OR ------------------------------------















// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int largest = 0;

//     printf("Factors : ");

//     for(int i=2;i<=n;i++){
//         if(n % i == 0){
//             int j;
//             for(j= 2;j<i;j++){
//                 if(i % j == 0){
//                     break;
//                 }
//             }

//             if(i == j){
//             printf("%d ",i);
//             largest = i;
//             }
//         }
//     }

//     printf("\n");

//     printf("Largest => %d\n",largest);
    
// }


