#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int arr[n],i;
int count =0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]<k){
            count++;
}
    }
            printf("%d\n",count);

}