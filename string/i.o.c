#include<stdio.h>
int main(){
    
    char s1[] ="Rakibul Islam";
    int i=0,len=0;

    while(s1[i] !='\0'){
        i++;
        len++;

    }
    printf("Length is : %d\n",len);
}