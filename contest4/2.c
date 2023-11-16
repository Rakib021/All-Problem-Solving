#include <stdio.h>
#include <string.h>
void sortAsc(char a[100]);

int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    sortAsc(a);
    printf("%s\t", a);

    return 0;
}

void sortAsc(char a[10])
{
    int i, j, temp;
    int len = strlen(a);
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}