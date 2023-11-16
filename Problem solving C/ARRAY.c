#include<stdio.h>

int main()
{
    int n;
    int lrg,sml;

    for(int i=1; i<=4; i++)
    {
        printf("Enter number %d (Press Enter):",i);
        scanf("%d", &n);

    if(n>lrg)
        lrg=n;

    else if(n<lrg)
        sml=n;
    }

    printf("Largest= %d",lrg);
    printf("Smallest= %d",sml);

    return 0;
}