#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==j || (i+j)==6){
            //if(i==3 || j==4){ //addition symbol
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf(" \n");
    }
}