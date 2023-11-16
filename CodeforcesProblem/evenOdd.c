#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int oddCount =0,evenCount =0,pos;

    // for(int i=1;i<=n;i++){

        if(n%2!=0){
          oddCount= floor(n/2)+1;
        //   pos =2*k-1;
       
    }
    else if(n%2==0){
       evenCount = n/2;
    //   pos = k-evenCount;
    }

    // }

    printf("%d\n",oddCount);
    // printf("%d\n",pos);
}