#include<stdio.h>
int main(){
    int x,y,needed;
    scanf("%d %d",&x,&y);

    if(x>y){
       needed= x-=y;
    }
   printf("%d",needed);
}