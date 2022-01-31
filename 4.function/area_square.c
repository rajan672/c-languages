#include<stdio.h>
//Function with argument and without return value
int squ(int l){
    int area;
    area=l*l;
    printf("Area of Square = %d",area);
}
int main(int l){
    printf("Enter the length = ");
    scanf("%d",&l);
    squ(l);
}