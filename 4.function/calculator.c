#include<stdio.h>
//Add function
void Add(int a,int b){
    int sum;
    sum=a+b;
    printf("Sum = %d\n",sum);
}
//Sub function
void Sub(int a, int b){
    int sub;
    sub=a-b;
    printf("Sub = %d\n",sub);
}
//Multiply function
void Mul(int a,int b){
    int mul;
    mul=a*b;
    printf("Mul = %d\n",mul);
}
//Divide function
void Div(int a,int b){
    int div,rem;
    div=a/b;
    rem=a%b;
    printf("Div = %d\n",div);
    printf("Rem = %d\n",rem);
}
//Main function
int main (){
    int a,b;
    char ch;
    printf("Select any one from this + , - , * , /  = ");
    scanf("%c",&ch);
    printf("enter the 1st number = ");
    scanf("%d",&a);
    printf("Enter the 2nd number = ");
    scanf("%d",&b);
    
    switch (ch)
    {
    case '+':
        Add(a,b);
        break;
    case '-':
        Sub(a,b);
        break;
    case '*':
        Mul(a,b);
        break;
    case '/':
        Div(a,b);
        break;
    default:
        printf("Enter a valid number.");
        break;
    }
}
