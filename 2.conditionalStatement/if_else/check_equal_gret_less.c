#include<stdio.h>
int main(int num1 , int num2){
    printf("Enter two numbers = \n");
    scanf("%d %d",&num1,&num2);
    if(num1 == num2){
        printf("Numbers are %d = %d .",num1,num2);
    }else if(num1> num2){
        printf("Numbers are %d > %d .",num1,num2);
    }else{
        printf("Numbers are %d < %d .",num1,num2);
    }
}