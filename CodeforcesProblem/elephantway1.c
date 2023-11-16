#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int step;
    step = (n/5) + (n%5 !=0);//1 hobe or not
    printf("%d\n",step);
}