#include<stdio.h>
int main(){
    int n,i,arr[2000005],moves=0;
    scanf("%d",&n);


    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        moves = moves+(arr[i-1] -arr[i]);
        arr[i]=arr[i-1];

    }
}
printf("%d\n",moves);



}