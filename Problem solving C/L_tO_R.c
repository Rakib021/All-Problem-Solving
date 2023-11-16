#include <stdio.h>


int isPrime(int n)
{
    if (n == 1)
        return 1;

    for (int i = 2; i <= (n/2); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int l, r, i;
        scanf("%d%d", &l, &r);

        for (i = l; i <= r; i++)
        {
            if (isPrime(i))
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}