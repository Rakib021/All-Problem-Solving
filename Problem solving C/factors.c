#include <stdio.h>
int main()
{
    int n, i, factors;
    scanf("%d", &n);
    printf("The factors of %d are:", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            if (i < n)
            {
                printf(",");
            }
            if(i==n){
                printf(".");
            }
        }
    }
}