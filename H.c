#include <stdio.h>
#include <math.h>

int main() {
    long long X;
    scanf("%lld", &X);

    if (X < 2) {
        printf("NO");
        return 0;
    }

    int isPrime = 1;
    for (long long i = 2; i * i <= X; i++) {
        if (X % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("YES");
    else
        printf("NO");

    return 0;
}
