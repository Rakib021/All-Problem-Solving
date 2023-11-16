#include<stdio.h>
int main(){
    int num1,num2,n1,n2,mod,gcdNum;
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2=num2;
    while(n2!=0){
        mod = n1%n2;
        n1=n2;
        n2 = mod;

    }
    gcdNum = n1;
        printf("The GCD of %d and %d is %d", num1, num2, gcdNum);

}