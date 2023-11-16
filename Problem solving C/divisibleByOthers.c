#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);
    if(num2 % num1 ==0){
        printf("The second number is divisible by the first number.");
    }
    else if(num1 %num2 ==0){
                printf("The first number is divisible by the second number.");

    }
    else{
        printf("None of them are divisible by the other");
    }
}