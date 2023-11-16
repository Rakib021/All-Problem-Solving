#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    int T;
    scanf("%d", &T);


    for (int t = 0; t < T; t++) {

        int n;
        scanf("%d", &n);
        int* A = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }


        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(A[i], A[j]) == 1) {
                    count++;
                }
            }
        }

        printf("%d\n", count*2);

        free(A);
    }

    return 0;
}
