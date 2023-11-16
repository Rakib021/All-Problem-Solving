#include<stdio.h>
int main (){
    int N,i,x;
    int arr [2000001];
    scanf("%d",&N);


    for(i=1;i<N; i++){
        scanf("%d",&x);
        arr[x]=1;
    }

    for ( i = 1; i <=N; i++)
    {
       if(arr[i] ==0){
           printf("%d\n",i);

           break;
       }
    }
    

}