#include "stdio.h"
int main(){
    int arr[10]={5,10,15,20,25,30,35,40,45,50};
    char ch[10]={'a','b','c','d','e','f','g','h','i','j'};
    for(int i=0; i<=10; i++){
        printf("Arrays Values are =%d \n",arr[i]);
        printf("Arrays Values in Character are =%d \n",ch[i]);
    }
}