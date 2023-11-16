#include <stdio.h>
int main()
{
    int N, ara[N], i, sorted[N], j;
    scanf("%d ", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);

        printf("%d ", ara[i]);
    }
    printf("\n");
    int max, index;

    for (j = 0; j < N; j++)
    {
        max = ara[0];
        index = 0;

        for (i = 0; i < N; i++)
        {
            if (max > ara[i])
            {

                max = ara[i];
                index = i;
            }
        }

        sorted[j] = max;
        ara[index] = -1;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", sorted[i]);
    }
    printf("\n");
}