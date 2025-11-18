#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a = 2, b = 3;
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}
