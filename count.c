#include <stdio.h>

int countDigit(int n, int digit) {
    if (n == 0)
        return 0;

    return (n % 10 == digit) + countDigit(n / 10, digit);
}

int main() {
    int n, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    count = countDigit(n, digit);

    printf("The digit %d occurs %d times in %d.\n", digit, count, n);

    return 0;
}
