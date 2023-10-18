//BT4. a)
#include <stdio.h>

void double_columns(int n) {
    for (int i = 1; i <= n / 2; i++) {
        printf("%-*d %d\n", (int)sizeof(n / 2), i, i + n / 2);
    }
    if (n % 2 != 0) {
        printf("%-*d\n", (int)sizeof(n / 2), n / 2 + 1);
    }
}

int main() {
    int n;
    printf("Enter a positive even integer: ");
    scanf("%d", &n);
    double_columns(n);
    return 0;
}
