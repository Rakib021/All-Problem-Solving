#include<stdio.h>
#include<stdlib.h>


int i;
int summation(int n)
{
    int sum=0;
    for(i=0; i<3; i++)
    {
        sum= sum+n;
        n++;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int k=1, s1=0, s2=0, r=4;
    while(k<=n)
    {
        if( k == n)
        {
            s1 = s1+ k;
            break;
        }
        else if (k+1 == n)
        {
            s1 = s1+ k + (k+1);
            break;
        }
        else if (k+2 == n)
        {
            s1 = s1+ k + (k+1) + (k+2);
            break;
        }
        else
        {
            int m = summation(k);
            s1+=m;
            k+=6;
        }
    }
    while(r<=n)
    {
        if( r == n)
        {
            s2 = s2+ r;
            break;
        }
        else if (r+1 == n)
        {
            s2 = s2+ r + (r+1);
            break;
        }
        else if (r+2 == n)
        {
            s2 = s2+ r + (r+1) + (r+2);
            break;
        }
        else
        {
            int m = summation(r);
            s2+=m;
            r+=6;
        }
    }
    int result = abs(s1-s2);
    printf("%d", result);
    return 0;
}