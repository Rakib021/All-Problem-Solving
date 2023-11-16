#include<stdio.h>
#include<string.h>
int main(){
    int size =20;
    char str[size][size], temp[size];
    int n,i,j;
    printf("Enter the number of strings :");
    scanf("%d",&n);

    printf("Enter The strings : ");

    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
}