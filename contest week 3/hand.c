#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld", &n);
    int i;
    for(i=0;i<n;i++){
        int numberofpeople;

        printf("%d\n", (numberofpeople*(numberofpeople-1))/2);
    }
    return 0;
}