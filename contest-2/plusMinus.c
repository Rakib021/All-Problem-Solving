#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {


    int N=0, m=0, max=0;
    scanf("%d", &N);
    char ara[N+1];
    scanf("%s",ara);
    int size = sizeof(ara)-1;
    int p=0,i;
    for(i=0; i<size; i++) 
        {
        if(ara[i] == '+') 
        {
            m=0;
            p++;
            if(p > max) 
            {
                max = p;
            }
        } else if(ara[i] == '-')
        {
            m++;
            p=0;
            if(m > max) 
            {
                max = m;
            }
        }
    }
    printf("%d", max);

    return 0;
}