#include <stdio.h>
int main()
{
    int N = 11, i, temp, j;
    int ara[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
    for (j = 0; j < N; j++)

    {
        for (i = 0; i < (N - 6); i++)
        {


            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
        for (i = 0; i < 8; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    
}