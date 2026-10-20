#include<stdio.h>

int main()

{
int n,m;
printf(" enter n and m :");
scanf("%d %d",&n,&m);

int arr1[n];  
int arr2[m];  
  
  
printf("Array 1 elements: ");  
for(int i= 0;i<n;i++){  
    scanf("%d",&arr1[i]);  
}  
  
printf("Array 2 elements: ");  
for(int i= 0;i<m;i++){  
    scanf("%d",&arr2[i]);  
}  
  
int count = 0;  
int visited[n];  
  
for(int i=0;i<n;i++){  
    
    for(int j=0;j<m;j++){  
        if(arr1[i] == arr2[j]){  
            int duplicate = 0; 
        
        for(int k=0;k<count;k++){
            if(visited[k] == arr1[i]){
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0){
        visited[count] = arr1[i];  
          
        count= count + 1;  
        }  
        break;
    }  
}  
}
for(int i= 0;i<count;i++){  
    printf("%d ",visited[i]);  
}

}
