#include<stdio.h>
int main(){
    int num1,num2;
    printf("Before swap= \n");
    scanf("%d %d",&num1,&num2); // 2 & 3
    num1=num1+num2; // num1 = 5
    num2=num1-num2; //num2 =5-3=2
    num1=num1-num2; //num1 = 5-2 =3
    printf("After swap = %d & %d",num1,num2);//3 & 2
}