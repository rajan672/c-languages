#include<stdio.h>
int main(int num){
    int sum=0;
    printf("Enter the 'n' number= ");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++){
        sum +=i; //sum = sum+i;
    }
    printf("%d is the sum.",sum);
}