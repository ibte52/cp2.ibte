#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
