#include <stdio.h>

int main() {
    int N;
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int number;
        scanf("%d", &number);

        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);

    return 0;
}
