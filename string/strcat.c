#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "My name is ";
    char str2 [] ="Rakibul islam";

int i=0,len=0,j=0;

while(str1[i] !='\0'){
    i++;
    len++;
}

while(str2[j] !='\0'){
    str1[len+j] = str2[j];
    j++;
}
    printf("%s\n",str1);
}