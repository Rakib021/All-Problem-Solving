
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str1[100] ="International Cricket Council";
    char str2[100];




    int i, len = 0, j;
    for (i = 1; str1[i] != '\0'; i++)
    {
        len++;
    }

    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

 printf("%s\n",str2);
}