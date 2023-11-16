#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    char S[N + 1];
    scanf("%s", S);
    int freq[26] = {0};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) count++;
    }
    printf("%d\n", count);

    return 0;
}