#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float a, b;
    int choice;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Result: %.2f\n", add(a, b)); break;
        case 2: printf("Result: %.2f\n", subtract(a, b)); break;
        case 3: printf("Result: %.2f\n", multiply(a, b)); break;
        case 4: printf("Result: %.2f\n", divide(a, b)); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
