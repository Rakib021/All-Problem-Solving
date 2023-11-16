#include<stdio.h>
int main (){
    int N= 6;
    int ara[N],i;

    for(i=0;i<N;i++){
        scanf("%d",&ara[i]);
        }
        int max = ara[0];

        for(i=0;i<N;i++){
            if(ara[i]>max){
              max = ara[i];  
            }
        }
        printf("The maximum value = %d\n",max);

}