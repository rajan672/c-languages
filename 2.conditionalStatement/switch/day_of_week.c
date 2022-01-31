#include<stdio.h>
int main(int num){
    printf("Enter a number 1 to 7 = \n");
    scanf("%d ", &num);
    switch (num){
    case 1:
        printf("%d represent Sunday.",num);
        break;
    case 2:
        printf("%d represent Monday.",num);
        break;
    case 3:
        printf("%d represent Tusday.",num);
        break;
    case 4:
        printf("%d represent Wednesday.",num);
        break;
    case 5:
        printf("%d represent Thrusday.",num);
        break;
    case 6:
        printf("%d represent Friday.",num);
        break;
    case 7:
        printf("%d represent Saturday.",num);
        break;
    default:
        printf("Enter between 1 to 7 only.");
        break;
    }
}