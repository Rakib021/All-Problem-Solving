#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int t,i,x, time;
    scanf("%d",&t);
    for (i=1; i<= t; i++)
    {
{
    scanf("%d%%",&x) ;
    if (60 >= x)
    {
        time= 60-x;
        x+=60-x;
    }

    if (80 >= x && 60 <= x)
    {
        time= time+(80-x)* 2;
        x+=80-x;
    }

    if (100>=x&&x>=80)
    {
        time=time+(100-x)*3;
    }
    }
    printf("%d minutes \n", time) ;
    time=0;
    }
}