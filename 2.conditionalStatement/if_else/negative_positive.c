#include<stdio.h>
int main(int num){
    printf("Enter a number = ");
    scanf("%d",&num);
    if(num > 0){
        printf("%d is Positive number.",num);
    }else{
        printf("%d is negative number.",num);
    }
}