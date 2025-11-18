#include <stdio.h>

// Recursive function to print binary representation
void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        if (num < 0) {
            printf("-");
            num = -num; // Handle negative numbers
        }
        decimalToBinary(num);
        printf("\n");
    }
    return 0;
}
