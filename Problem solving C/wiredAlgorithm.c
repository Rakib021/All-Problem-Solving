#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    while(n>1){
        if(n%2==0){
            n/=2;

        }
        else{
            n-=1;

        }
        printf(",%d",n);
    }
}