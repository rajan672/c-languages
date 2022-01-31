#include<stdio.h>
int main(){
    int num1, num2,temp;
    printf("Enter two numbers=\n");
    scanf("%d %d",&num1,&num2); // entered 3 & 4
    temp=num1;//temp = 3
    num1=num2; //num1 =4
    num2=temp; //num2 = 3
    printf("Swap no.'s are= %d & %d ",num1,num2); //swap= 4 & 3.
}