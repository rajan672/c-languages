#include<stdio.h>
int main(){
    int arr[50][50],rsize,csize;
    printf("Enter the row size of array = ");
    scanf("%d",&rsize);
    printf("Enter the column size of array = ");
    scanf("%d",&csize);
    for(int i=0; i<=rsize; i++){
        for(int j=0; j<=csize; j++){
            printf("Enter value of arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<=rsize; i++){
        for(int j=0; j<=csize; j++){
            printf("Value of arr[%d][%d] = %d \n",i,j,arr[i][j]);
        }
    }
}