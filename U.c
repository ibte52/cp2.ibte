#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    long long total_sum = 0;

    for (int i = 1; i <= N; i++) {
        int s = sum_digits(i);
        if (s >= A && s <= B) {
            total_sum += i;
        }
    }

    printf("%lld\n", total_sum);

    return 0;
}
