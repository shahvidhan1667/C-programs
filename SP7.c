#include <stdio.h>
#include <string.h>

void concatenateString(char str1[], char str2[]) {
    strcat(str1, str2);
}

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";
    concatenateString(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
