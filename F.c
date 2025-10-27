#include <stdio.h>

/**
 * Reads an integer N and prints its multiplication table from 1 to 12
 * in the format: N * i = N*i
 */
int main() {
    int N;
    int i; // Loop counter for the multiplier

    // Read the input number N
    // The problem states N is between 1 and 50
    if (scanf("%d", &N) != 1) {
        // Handle error if input reading fails (e.g., EOF or invalid format)
        return 1;
    }

    // Loop from i = 1 to 12
    for (i = 1; i <= 12; i++) {
        // Calculate the product
        int product = N * i;

        // Print the result in the required format: N * i = product
        printf("%d * %d = %d\n", N, i, product);
    }

    return 0;
}
