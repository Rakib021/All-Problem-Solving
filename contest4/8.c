#include<stdio.h>
#include<string.h>

int i,j;
void broken_keyboard(char str[])
{
    char temp;
    int len = strlen(str)-1;
    for(i=0; str[i]!='\0'; i++)
    {
        if(i%2 != 0){
            for(j=0; j<1; j++){
                printf("%c", str[i]);
            }
        }
        printf("%c", str[i]);
    }
}
int main()
{
    char str[100000];
    fgets(str, 100000, stdin);
    broken_keyboard(str);
    return 0;
}