#include<stdio.h>
int main ()
{
    int t,i,X, roll[20],temp,temp2;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&roll[i]);
    }
    scanf("%d",&X);
    for(i=0;i<X%t;i++)
    {
        temp = roll[0];
       roll[0]=roll[t-1];
       roll[t-1]=temp;
       for(int i=t-2;i>=0;i--)
    {
         temp2=roll[0];
        roll[0]=roll[i];
        roll[i]=temp2;
    }
    }
    for(i=0;i<t;i++)
    {
        printf("%d ", roll[i]);
    }
    return 0;
}