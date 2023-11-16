#include <stdio.h>
int main()
{
    int N = 8, i;
    int ara[8] = {12, 7, 6, 3, 9, 5, 2, 14};
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
    int sortedAra[N];
    int min = ara[0];
    int minIndex = 0;

    for (i = 0; i < 8; i++)
    {
        if (min > ara[i])
        {
            min = ara[i];
            minIndex = i;
        }
    }
    sortedAra[0] = min;
    ara[minIndex] = 9999;
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", sortedAra[i]);
    }
    printf("\n");
}