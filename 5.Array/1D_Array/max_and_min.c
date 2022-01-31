#include<stdio.h>
int main(int n){
    int ar[100],max,min;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        printf("Enter the value for ar[%d] = ",i);
        scanf("%d",&ar[i]);
    }

    min=max=ar[0];
    for(int i=0; i<=n; i++){
        if(max<ar[i]){
            max = ar[i];
        }
        if(min>ar[i]){
            min=ar[i];
        }
    }
    printf("Maximum no. in array is %d \n",max);
    printf("Minumum no. in array is %d",min);
}