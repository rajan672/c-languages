#include<stdio.h>
int main(int n){
    int A[100];
    printf("Enter size of the array : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        printf("Enter the value of A[%d] =",i);
        scanf("%d",&A[i]);
    }
    for(int i=0; i<=n; i++){
        if(A[i]%2 == 0){
        printf("A[%d]= %d is Even.\n",i,A[i]);
    }else{
        printf("A[%d]= %d is Odd.\n",i,A[i]);
    }
    }
}