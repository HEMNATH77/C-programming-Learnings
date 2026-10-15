#include <stdio.h>
#include<unistd.h>
int main()
{
    printf("Loading [");
    int i;
    for(i = 1;i<=10;i++){
          printf("--");
          
          printf("");
          printf("\rLoading[");
          for(int j=1;j<=i;j++){
          printf("--");
          
          }
          printf("]Percentage :%d%%",i*10);
          fflush(stdout);
          sleep(2);
        
    }
    printf("\n");
    printf("completed");
}
