#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long int t,a,b,c,s,d,i,total;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
    scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
    total=a+b+c;
    if(s>total)
    {
        d=s-total;
    }
         printf("%lld\n",d);
    }
   return 0;

}