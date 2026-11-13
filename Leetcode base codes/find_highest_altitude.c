#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int altitude = 0;
    int highest = 0;
    for(int i=0;i<n;i++){
        altitude = altitude + arr[i];
        printf("Altitude = %d\n",altitude);
        if(altitude > highest)
        highest = altitude;
    }

    printf("Altitude = %d\n",altitude);
    printf("Highest = %d\n",highest);

}
