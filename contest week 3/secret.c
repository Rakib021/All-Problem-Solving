#include<stdio.h>
int main ()
{
    int t,i,x, secret;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {

        secret = 0;
        scanf("%d",&x);
        if (x==0||x==1)
            secret=1;
        for(int j =2; j<=x/2;++j)
        {
            if(x%j==0)
            {
                secret=1;
                continue;
            }
        }
        if (secret==0)
        {
            printf("Yes \n");
        }
        else
        
           printf("No \n"); 
    }
}