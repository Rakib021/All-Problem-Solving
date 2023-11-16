#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    
    long long int N,total=0;
    scanf("%lld",&N);

     total =( N * (N-1) )/ 2; 

    printf("%lld\n",total);

    return 0;

}