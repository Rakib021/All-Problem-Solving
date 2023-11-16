#include<stdio.h>
int main(){
    int N= 100;
    int ara[N],i;

    for(i=0;i<N;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<N;i++){
        printf("%d-th position value = %d\n",i,ara[i]);
    }
}