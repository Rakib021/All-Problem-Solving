#include<stdio.h>
#include<string.h>
int main(){
    char  str1[] = "Rakibul Islam";
    char str2 [] ="Rakib";

    int d =strcmp(str1,str2);

    if(d==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are Not equal equal");

    }

}