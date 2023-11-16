#include<stdio.h>
int main()
{
    int i, j, N;
    scanf("%d",&N);
   
    for(i=1;i<=N-1;i++)
    {
        printf("%d",i);
        for(j=2;j<=N;j++)
        {
            if(i==1||j==1)
            printf("%d",j);
            else if(j==N)
            printf("%d",N);
            else
            printf(" ");
        }
         
         printf("\n");
    }
   
    for (j=N;j>=N-1;j++)
        {
            if(i==N)
            printf("%d",N);
        }
}