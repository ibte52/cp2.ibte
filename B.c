#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int found_even = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            found_even = 1;
        }
    }
    if (found_even == 0) {
        printf("-1\n");
    }
    return 0;
}
