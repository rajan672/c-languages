#include "stdio.h"
int main(){
    int arr[100];
    int n,sum=0;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        printf("Enter the values of arr[%d] =",i);
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum = %d",sum);
}