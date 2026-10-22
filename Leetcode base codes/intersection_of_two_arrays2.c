#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int arr1[n],arr2[m];

    printf("Array 1 elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Array 2 elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    int visit[n];
    int count = 0;
    for(int i=0;i<n;i++){
         for(int j = 0;j<m;j++){
            if(arr1[i] == arr2[j]){
                int flag = 0;
                
                for(int k=0;k<count;k++){
                    if(visit[k] == arr1[i]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                visit[count] = arr1[i];
                count = count + 1;
                }
                break;
            }
        }
    }
    

    
    printf("visited elements: ");
    for(int i=0;i<count;i++){
        printf("%d ",visit[i]);
    }

}
