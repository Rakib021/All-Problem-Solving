#include <stdio.h>
int main()
{
    int n, m, i, j, ara[22][22];
    scanf("%d %d", &n, &m);
    // int ;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {

            scanf("%d", &ara[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (ara[i][j] == i && ara[i][j] == j)
            {
                ara[i][j] += 3;
            }
            else if(ara[i][j]==i){
                ara[i][j] +=2;
            }
            else if(ara[i][j]==j){
                ara[i][j] +=1;
            }
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }
  
}