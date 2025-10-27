#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int start = 4 * (i - 1) + 1;
        printf("%d %d %d PUM\n", start, start + 1, start + 2);
    }
    return 0;
}
