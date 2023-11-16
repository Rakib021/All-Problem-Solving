#include <stdio.h>
#define MAX_NUMBER 1000

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n, target;
        scanf("%d", &n);

        int arr[MAX_NUMBER];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &target);

        int found = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == target) {
                printf("Case %d: %d\n", i,j+1);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}
