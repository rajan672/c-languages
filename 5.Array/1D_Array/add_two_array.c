#include<stdio.h>
int main(){
    int a[50],b[50],c[50],size;
    printf("Enter the size of an array = ");
    scanf("%d",&size);
    for(int i=0; i<=size; i++){
        printf("Enter the value of A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int j=0; j<=size; j++){
        printf("Enter the value of B[%d]= ",j);
        scanf("%d",&b[j]);
    }
    for(int k=0; k<=size; k++){
        c[k]= a[k]+b[k];
        printf("Value of C[%d] = %d \n",k,c[k]);
    }
}