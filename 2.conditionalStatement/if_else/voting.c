#include<stdio.h>
int main(int num){
    printf("Enter your age = ");
    scanf("%d",&num);
    if(num < 18){
        printf("You are not eligible for voting.");
    }else{
        printf("You are eligible for voting.");
    }
}