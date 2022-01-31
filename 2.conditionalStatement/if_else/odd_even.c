#include<stdio.h>
int main(int num){
    //int num;
    printf("Enter a Number = ");
    scanf("%d",&num);
    if(num%2 ==0){
        printf("%d is Even number.",num);
    }else{
        printf("%d is Odd number.",num);
    }
}