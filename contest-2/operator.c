#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, sum=0;
    char s[25];
    scanf("%s", s);
    scanf("%d %d", &a, &b);
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='*'){
            sum=(a*b)+sum;
        }
        else if(s[i]=='+'){
            sum= a+b+sum;
        }
    }
    printf("%d", sum);
    return 0;
}