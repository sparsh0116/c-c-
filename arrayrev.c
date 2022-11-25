#include<stdio.h>
int arrayreversal(int arr1[10], int m){
    int j;
    for ( j = m-1; j >=0; j--)
    {
        printf("%d",arr1[j]);
    }
    return 0;
}

int main() {
    int arr[10],i,n;
    printf("Enter the no. of elements you want in your array:");
    scanf("%d",&n);
    for ( i = 0; i < n ; i++)
    {
        printf("Enter the elements of the array:");
        scanf("%d",&arr[i]);
    }
    printf("array in reverse order is: \n");
    printf("%d",arrayreversal(arr[i],n));
    
    return 0;
}