#include<stdio.h>
//Function with argument and with return value
int oddeven(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }

}
int main(){
    int a,flag=0;
    printf("Enter a number = ");
    scanf("%d",&a);
    flag=oddeven(a);
    if(flag==0){
        printf("%d is odd.",a);
    }else{
        printf("%d is even.",a);
    }
}