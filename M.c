#include <stdio.h>

int is_lucky(int n) {
    if (n == 0) {
        return 0;
    }
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int found_lucky = 0;
    for (int i = A; i <= B; i++) {
        if (is_lucky(i)) {
            if (found_lucky) {
                printf(" ");
            }
            printf("%d", i);
            found_lucky = 1;
        }
    }

    if (!found_lucky) {
        printf("-1");
    }

    printf("\n");

    return 0;
}
