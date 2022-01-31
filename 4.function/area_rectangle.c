#include<stdio.h>
//Function without argument and with return value
int rect(){
    int l,b,area;
    printf("Enter lenght number = ");
    scanf("%d",&l);
    printf("Enter the breath number = ");
    scanf("%d",&b);
    area=l*b;
    return area;
}
int main(){
    printf("Area of reactangle =\n ");
    printf("Area = %d",rect());
}