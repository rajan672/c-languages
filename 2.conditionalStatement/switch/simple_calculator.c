#include<stdio.h>
int main(int num1, int num2 , char ch){
    //int num1,num2;
    //char ch;
    printf("Enter a alphabet = ");
    scanf("%c",&ch);
    printf("Enter the 1st number = ");
    scanf("%d",&num1);
    printf("Enter the 2nd number = ");
    scanf("%d",&num2);
    
    switch(ch){
    case '+':
        printf("Sum is %d",(num1+num2));
        break;
    case '-':
        printf("Sub is %d",(num1-num2));
        break;
    default:
        printf("Enter valid number.");
        break;
    }
}