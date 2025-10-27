#include <stdio.h>

int main() {
    int N, M;
    while (scanf("%d %d", &N, &M) == 2) {
        if (N <= 0 || M <= 0) {
            break;
        }

        int start, end;
        if (N < M) {
            start = N;
            end = M;
        } else {
            start = M;
            end = N;
        }

        long long sum = 0;
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%lld\n", sum);
    }
    return 0;
}
