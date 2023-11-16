#include<stdio.h>
#include<string.h>
int main()
{
    int n, a, i, j;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        char s[1000];
        scanf("%s", s);
        int count=0;
        for(j=0; j<strlen(s); j++)
        {
            if((s[j]=='0' && s[j+1]=='1')||
               (s[j]=='1' && s[j+1]=='0')){
                count++;
               }
        }
        ara[i]=count;
    }
    for(i=0; i<n; i++){
        printf("%d\n", ara[i]);
    }
    return 0;
}