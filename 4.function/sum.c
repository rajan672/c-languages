#include<stdio.h>
int Add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
    printf("Sum = %d",Add(20,20));
}