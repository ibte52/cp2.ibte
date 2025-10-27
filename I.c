#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int original_N = N;
    int temp_N = N;
    int reversed_N = 0;
    int remainder;

    while (temp_N != 0) {
        remainder = temp_N % 10;
        reversed_N = reversed_N * 10 + remainder;
        temp_N /= 10;
    }

    printf("%d\n", reversed_N);
    if (original_N == reversed_N) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
