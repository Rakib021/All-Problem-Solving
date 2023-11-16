#include<stdio.h>
int main(){
    int n,h,i,x;
    scanf("%d %d",&n,&h);
    int count =0;

    for ( i = 1; i <=n; i++)
    {
        scanf("%d",&x);
        if(x>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    printf("%d\n",count);
    
}