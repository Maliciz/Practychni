﻿#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Введіть натуральне число n: ");
    scanf_s("%d", &n);

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
