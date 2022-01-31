#include<stdio.h>
int main(int num){
    int sum=0,a;
    printf("Enter a number = ");
    scanf("%d",&num);
    for (int i = 0; i <=num; i++){
        printf("Enter %d value = ",i);
        scanf("%d",&a);
        sum = sum+a;
    }
    printf("%d is sum.",sum);
}