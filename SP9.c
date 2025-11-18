#include <stdio.h>
#include <string.h>

void printReversedVertical(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
}

int main() {
    char str[] = "Hello";
    printReversedVertical(str);
    return 0;
}
