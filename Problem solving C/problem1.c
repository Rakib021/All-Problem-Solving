#include<stdio.h>
int main (){
    int i,j,x,sum;
    for(i=1;i<=10;i++){
        printf("Enter the %dth student :\n",i);
        sum=0;
        for(j=1;j<3;j++){
            scanf("%d",&x);
            sum+=x;
        }
    }
}