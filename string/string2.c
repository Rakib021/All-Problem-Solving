#include <stdio.h>
int main()
{
    char sen[1000];
    // scanf("%s",sen);
    fgets(sen, sizeof(sen), stdin);

    int i = 0,count=0;
    while (sen[i] != '\0')
    {
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')

        {
            count++;
        }

        i++;
    }

    printf("Number of Vowels =%d\n", count);
}