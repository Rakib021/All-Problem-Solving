#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int step;
    if(n%5==0){
        step = n/5;

        
    }
    else{
        step = (n/5) +1;
            printf("%d\n",step);

    }
    printf("%d\n",step);
}