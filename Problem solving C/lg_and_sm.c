#include <stdio.h>
int main()
{
    int  n,i, lg, sm;
    scanf("%d", &n);
    lg = n;
    sm = n;

    for (i = 1; i <= 3; i++)
    {
        scanf("%d", &n);

        if (n > lg)
        {
            lg = n;
        }
        else if (n < sm)
        {
            sm = n;
        }
    }
    printf(" Largest =%d\n", lg);
    printf(" Smallest =%d\n", sm);
}