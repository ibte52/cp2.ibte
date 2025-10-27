#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y);

        if (X > Y) {
            long long temp = X;
            X = Y;
            Y = temp;
        }

        long long sum = 0;
        for (long long i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
