#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        long long factorial = 1;
        if (N == 0) {
            printf("1\n");
        } else {
            for (int i = 1; i <= N; i++) {
                factorial *= i;
            }
            printf("%lld\n", factorial);
        }
    }
    return 0;
}
