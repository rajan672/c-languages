#include<stdio.h>
int main(int num1, int num2 , int num3){
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is greater.",num1);
    }else if(num2>num1 && num2>num3){
        printf("%d is greater.",num2);
    }else{
        printf("%d is greater.",num3);
    }
}