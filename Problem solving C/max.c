#include<stdio.h>
int main(){
    int N;
    printf("Enter The size Of array :");
    scanf("%d",&N);
    int ara[N],i,j,second;
  

    for(i=0;i<N;i++){
        scanf("%d",&ara[i]);
       
    }
      int max = ara[0];
    //   second = ara[1];
     for(i=0;i<N;i++){
            if(max<ara[i]){
                second = max;
                max = ara[i];
            }
            else if(second <ara[i]){
                second  = ara[i];
            }
            
        }
    printf("The maximum Number is  : %d\n",max);
    printf("The maximum Number is  : %d\n",second);
}