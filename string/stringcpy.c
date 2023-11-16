#include<stdio.h>
#include<string.h>

int main(){
    char source [] ="I love Programming";
    char target [100];

    strcpy(target,source);
    printf("target =%s\n",target);
}