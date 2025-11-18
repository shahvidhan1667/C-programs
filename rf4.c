#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Take care of negative input
    if (num < 0) num = -num;
    int result = sumOfDigits(num);
    printf("Sum of digits: %d\n", result);
    return 0;
}
