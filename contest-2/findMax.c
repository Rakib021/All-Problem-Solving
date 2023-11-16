#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, i, j;
    scanf("%d", &N);

    int ara[N];


    for(i=0; i<N; i++){
        scanf("%d", &ara[i]);
    }
    int max=0, sum=0;
    for(i=0; i<N; i++){
       if(ara[i]%2 == 0){
            if(max<ara[i]){
                max = ara[i];
            }
       }

       for(j=i+1; j<N; j++){
         sum= ara[i]+ara[j];
         if(sum%2 == 0){
            if(sum > max){
                max = sum;
            }
         }

       }
    }

    printf("%d\n", max);  
    return 0;
}