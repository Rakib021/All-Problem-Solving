#include <stdio.h>
#include <string.h>

int main() {
   
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int N;
        scanf("%d", &N);

        char strr[6];
        sprintf(strr, "%d", N);
        for (int j = 0, len = strlen(strr); j < len / 2; j++) {
            char temp = strr[j];
            strr[j] = strr[len - j - 1];
            strr[len - j - 1] = temp;
        }


        for (int j = 0; j < strlen(strr); j++) {

            printf("%c", strr[j] + 'A' - '1');
        }
        
        printf("\n");
    }

    return 0;
}