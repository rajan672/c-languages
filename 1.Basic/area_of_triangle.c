#include<stdio.h>
int main(){
    int base,height,Area;
    printf("Enter the base of triangle = ");
    scanf("%d",&base);
    printf("Enter the height of triangle = ");
    scanf("%d",&height);
    Area=(base*height)/2;
    printf("Area of Triangle = %d",Area);
}