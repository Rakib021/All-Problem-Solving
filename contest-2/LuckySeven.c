#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    char ara[125];
    int i , n;
    while (t--)
    {
        scanf("%s",ara);
        n= strlen(ara);
        int flag=0;
        for(i=0;i<n/2;i++)
        {
            if(ara[i]!=ara[n-i-1]){
                flag=1;
                break;
        }}
        if(flag)
        {
            printf("Case #1: Not Palindrome\n");
        } else
        {
            if(strlen(ara)<=7)
                printf("Case #3: %s\n",ara);
            else
                printf("Case #2: %c%d%c\n",ara[0], n-2, ara[n-1]);
        }

    }


    return 0;
}