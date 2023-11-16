#include<stdio.h>
int main(){
    int n;
    printf("Enter The size of array:");
    scanf("%d",&n);
    int ara[n],i,ecCount =0,ocCount =0;

    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++){
        if(ara[i]%2 ==0){
            ecCount++;
        }
        else{
            ocCount++;
        }
    }
    printf("Even Counter: %d\n",ecCount);
    printf("Odd Counter: %d\n",ocCount);
    
}