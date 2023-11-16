#include <stdio.h>
int main()
{
    int N, i, temp, j;
    printf("Enter Soze of array : ");
    scanf("%d", &N);

    int ara[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    for (j = 0; j < N; j++)
    {

        for (i = 0; i < (N - 1); i++)
        {

            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
}