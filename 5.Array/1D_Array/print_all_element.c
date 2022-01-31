#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter the position = ");
    scanf("%d",&i);
    arr[0]=5;
    arr[1]=10;
    arr[2]=15;
    arr[3]=20;
    printf("array in position arr[%d]= %d",i,arr[i]);
}