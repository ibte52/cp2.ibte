#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max_num, current_num;
    scanf("%d", &max_num);

    for (int i = 1; i < n; i++) {
        scanf("%d", &current_num);
        if (current_num > max_num) {
            max_num = current_num;
        }
    }

    printf("%d\n", max_num);

    return 0;
}
