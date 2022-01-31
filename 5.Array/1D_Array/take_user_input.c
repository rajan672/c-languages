#include "stdio.h"
int main (){
    int arr[5];
    for(int i=0; i<=5; i++){
        printf("Enter the arr[%d] values = ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<=5; j++){
        printf("Array values at position %d = %d \n",j,arr[j]);
    }

}